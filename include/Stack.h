#ifndef __STACK_H__
#define __STACK_H__
#include "Node.h"

template<class StackType>
class Stack
{
    public:
        Stack();
        virtual ~Stack();

        Stack<StackType>& Push(const StackType);
        StackType Pop();
        StackType Peek();
        bool IsEmpty();
        int Size();

    private:
        Node<StackType> *Top;
        int totalElements;
};


template <class StackType>
Stack<StackType>::Stack(void) : Top( NULL ), totalElements(0) {
}

template <class StackType>
Stack<StackType>::~Stack() {
}

template <class StackType>
Stack<StackType>& Stack<StackType>::Push(const StackType toPush) {
    Node<StackType>* toAdd = new Node<StackType>(toPush);
    if(!IsEmpty()){
        Node<StackType>* aux = Top;
        toAdd->SetNext(aux);
    }
    Top = toAdd;
    totalElements++;
    return *this;
}

template <class StackType>
StackType Stack<StackType>::Pop() {
    if(!IsEmpty()){
        Node<StackType>* toPop = Top;
        Top = toPop->GetNext();
        totalElements--;
        return toPop->GetValue();
    }
    return NULL;
}

template <class StackType>
StackType Stack<StackType>::Peek() {
    return Top->ViewValue();
}

template <class StackType>
bool Stack<StackType>::IsEmpty() {
    return totalElements == 0;
}

template <class StackType>
int Stack<StackType>::Size() {
    return totalElements;
}

#endif // __STACK_H__
