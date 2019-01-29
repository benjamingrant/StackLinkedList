#ifndef STACK_H
#define STACK_H
#include <node.h>

class Stack {
private:
    int numElements; // keeps the size of the stack
    Node *head; // points to the top node on the stack
public:
    Stack();
   ~Stack();
    void push(int value); //  adds value to the top of the stack
    int pop();            //  removes and returns top value of the stack
    int peek();           //  returns top value of the stack without removing it
    bool isEmpty();       //  returns true if the stack is empty, false otherwise
    int size();           //  returns the number of items on the stack
};


#endif // STACK_H
