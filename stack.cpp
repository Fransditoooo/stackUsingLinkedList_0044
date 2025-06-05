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
    top = newNode; // 4. Update the top pointer to the new node
    cout << "Push value: " << value << endl;
    return value; 
}
// IsEmpty opperation: Check if the stack is empty
bool isEmpty()
{
    return top == NULL; // Return true if the top pointer is NULL, indicating an empty
}

// Pop operation: Remove the topmost element from the stack
void pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty. " << endl;
        return; // If the stack is empty, print a message and return
    }
    cout << "Popped value: " << top->data << endl;
    top = top->next; //Update the top pointer to the next node 
}
//peek/top operation: retrieve the value of the topmost element without removing it
    void peek()
    {
        if (isEmpty())
        {
            cout << "lis is empty" << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }// return the value of the top node
    }
};

int main()
{
    Stack stack;
    
    int choice = 0;
    int value;

    while (choice !=4)
    {
        cout << "1.push\n";
        cout << "2. pop\n";
        cout << "3.peek\n";
        cout << "4.exit\n";
        cout << " enter your choice:";

        switch (choice)
        {
            case 1:
            cout << "enter the value to push:";
            cin >> value;
            stack.push(value);
            break;
            case 2:
            stack.pop();
            break;
            case 3:
            stack.peek();
            break;

            case 4:
            cout << "Exiting program" << endl;
            break;
            

