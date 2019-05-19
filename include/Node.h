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
    Node<NodeType>& ChangeNext(Node<NodeType> *);
    Node<NodeType>& ChangeValue(NodeType);

    NodeType ViewValue(void);
    Node<NodeType>* ViewNext(void);

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
NodeType Node<NodeType>::ViewValue(void)
{
    return nodeValue;
};

template<class NodeType>
Node<NodeType>* Node<NodeType>::ViewNext(void)
{
    return nextNode;
};

template <class NodeType>
Node<NodeType>& Node<NodeType>::SetNode(NodeType node_value, Node<NodeType>* next)
{
    bool checked = false;

    ChangeValue(node_value);
    checked = ChangeNext(next);
    //(nodeValue!=NULL || nodeValue!=nullptr) ? checked=true : checked=false;
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
Node<NodeType>& Node<NodeType>::ChangeNext(Node<NodeType>* new_next)
{
    nextNode = new_next;
    return *this;
};

template <class NodeType>
Node<NodeType>& Node<NodeType>::ChangeValue(const NodeType new_value)
{
    nodeValue = new_value;
    return *this;
};


#endif // __NODE_H__
