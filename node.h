#ifndef NODE_H
#define NODE_H


class Node
{
private:
    int value;
    Node *previousNode; // points to the node that came before it in the stack
public:
    Node(int num, Node *previousNode) { this->previousNode = previousNode; // sets this node's previousNode
                                                                           // pointer to the node that came before
                                        value = num;}
    ~Node();
    int readValue() {return value;} // for returning private members
    Node *readPreviousNode() {return previousNode;} // for returning private members
};

#endif // NODE_H
