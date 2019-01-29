#include "stack.h"
#include "node.h"

Stack::Stack() {
    head = nullptr; // the original head node is a nullptr
    numElements = 0;
}

Stack::~Stack() {

}

void Stack::push(int value){
    Node *newNode = new Node(value, head); // pointer to a new node
    head = newNode; // switching the head node to the new node
    numElements++;
}

int Stack::pop(){
    int popVal = head->readValue(); // returning the private value member of the head node

    head = head->readPreviousNode(); // returning the private previousNode member of the head node
                                     // to set the head node one node back in the stack
                                     // yeah, I had to leave that bitch cause she was on the crack
    numElements--;
    return popVal;
}

int Stack::peek(){
     return head->readValue(); // returning the private value member of the head node
}

bool Stack::isEmpty(){
    return (numElements == 0);
}

int Stack::size(){
    return numElements;
}
