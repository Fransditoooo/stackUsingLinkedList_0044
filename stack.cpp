/**
 * @file stack.cpp
 * @mainpage Dokumen Project Stack Linked List
 * 
 * @section Deskripsi
 * Program ini merupakan implementasi struktur data stack (tumpukan).
 * Mendukung operasi dasar seperti:
 * - push
 * - pop
 * - display
 * 
 * @section Cara Penggunaan
 * Jalankan program dan pilih menu:
 * 1. push 
 * 2. pop
 * 3. display
 * 4. exit
 * 
 * @section Penulis
 * - Nama: Fransdito Bayu Pratama
 * - Nim : 20240140044
 * - Kelas : A
 * - Tanggal : 23 Juni 2025
 */

/**
 * @file stack.cpp
 * @author Fransdito 
 * @brief ini adalahh program stack menggunakan linked list
 * @version 0.1
 * @date 2025-06-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

// Node class representing a singel node in the linked list
/**
 * @class Node
 * @brief Class Node untuk mneyimpan data dan alamat memori
 */
class Node
{
public:
int data; ///< variabel data dengan tipe intergen
Node *next; ///< variabel untuk menyimpan alamat memori

/**
 * @brief Construct a new Node object
 * 
 */
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

public:
    //Push operation Insert an Element onto the top of the stack
    /**
     * @brief Method push 
     * 
     * @param value menerima input 
     * @return int
     */

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

/**
 * @brief ini adalah function main yang berfungsi menjalankan program di terminal
 * 
 * @return int 
 */
int main()
{
    Stack stack;
    
    int choice = 0; ///< variabel yang akan digunakan untuk menyimpan pilihan pada operasi switch case 
    int value;      ///< variabel yang akan digunakan untuk  memasukkan nilai data kedalam stack

    /**
     * @brief ini adalah operasi witch case yang akan digunakan untuk push, pop, dan display data yang dimasukkan
     * 
     */

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
            stack.push(value); ///< push value yang dimasukkan ke stack
            break;
            case 2:
            stack.pop(); ///< mengeluarkan topmost di elemen dari stack
            break;
            case 3:
            stack.peek(); ///< untuk melihat isi data di list
            break;

            case 4:
            cout << "Exiting program" << endl;
            break;
            default:
            cout << "invalid choice. try again" << endl;
            break;
        }

        cout << endl;
    }
    return 0;
}
 



