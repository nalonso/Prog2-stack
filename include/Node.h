#ifndef __NODE_H__
#define __NODE_H__
#include <cstddef>

template<class NodeType>
class Node
{
private:
    NodeType nodeValue;
    Node<NodeType>* nextNode;

public:
    Node (void);
    Node (const Node<NodeType> &);
    Node (const NodeType);
    ~Node (void);
    void operator = (const Node<NodeType> &);

    Node<NodeType>& SetNode(NodeType, Node<NodeType> *);
    Node<NodeType>& DropNode(void);
    Node<NodeType>& SetNext(Node<NodeType> *);
    Node<NodeType>& SetValue(NodeType);

    NodeType GetValue(void);
    Node<NodeType>* GetNext(void);

};

template <class NodeType>
Node<NodeType>::Node()
{
    nodeValue = NULL;
    nextNode = NULL;
};

template <class NodeType>
Node<NodeType>::Node(const NodeType valueNode)
{
    nodeValue = valueNode;
    nextNode = NULL;
};

template <class NodeType>
Node<NodeType>::~Node(void){};

template <class NodeType>
void Node<NodeType>::operator=(const Node&){};

template<class NodeType>
NodeType Node<NodeType>::GetValue(void)
{
    return nodeValue;
};

template<class NodeType>
Node<NodeType>* Node<NodeType>::GetNext(void)
{
    return nextNode;
};

template <class NodeType>
Node<NodeType>& Node<NodeType>::SetNode(NodeType node_value, Node<NodeType>* next)
{
    ChangeValue(node_value);
    ChangeNext(next);
    return *this;
};

template <class NodeType>
Node<NodeType>& Node<NodeType>::DropNode(void)
{
    Node* aux = nextNode;

    nodeValue = NULL;
    nextNode = NULL;

    return aux;
};

template <class NodeType>
Node<NodeType>& Node<NodeType>::SetNext(Node<NodeType>* newNext)
{
    nextNode = newNext;
    return *this;
};

template <class NodeType>
Node<NodeType>& Node<NodeType>::SetValue(const NodeType newValue)
{
    nodeValue = newValue;
    return *this;
};


#endif // __NODE_H__
