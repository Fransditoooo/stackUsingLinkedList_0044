#include <iostream>
using namespace std;

// Node class representing a singel node in the linked list
class Node
{
public:
int data;
Node *next;

Node()
{
    next = NULL;
}
};

// Stack class
class Stack
{
private:
Node *top; //Pointer to the top node of the stack

public:
Stack()
{
    top = NULL; //Initlalize the stack with a null top pointer
}

//Push operation: Insert an elemen onto the top of the stack
int push(int value)
{
    Node *newNode = new Node(); // 1. Allocate memory for the new node 
    newNode->data = value; // 2. assign value
    newNode->next = top; // 3. Set the next poinnter of the new node to the current top n
    