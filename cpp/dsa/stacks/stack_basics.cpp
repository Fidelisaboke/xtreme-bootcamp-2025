/**
* Stack data structure linked list implementation
 */

#include <bits/stdc++.h>
using namespace std;

/**
* A singly linked list node.
 */
class Node{
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};


/**
* A class representing a stack data structure.
 */
class Stack{
    Node* head;

public:
    Stack() {
        this->head == nullptr;
    }

    /**
    * @brief Adds a new element to the top of the stack.
    * 
    * @param new_data The value to add to the top of the stack.
     */
    void push(int new_data){
        Node* new_node = new Node(new_data);
        if (!new_node) {
            cout << "\nStack Overflow!";
        }
        new_node->next = head;
        head = new_node;
    }

    /**
    * @brief Removes an element from the top of the stack
    *
     */
    void pop(){
        if(this->isEmpty()){
            cout << "\nStack Underflow!" << endl;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    /**
    * @brief Returns the element at the top of the stack without removing it.
    *
     */
    int peek(){
        if(!isEmpty()){
            return head->data;
        }
        
        cout << "\nStack is empty!";
        return INT_MIN;
    }

    /**
    * @brief Checks if the stack is empty.
    *
     */
    bool isEmpty() {
        return head == nullptr;
    }
};

int main(){
    cout << "--- Linked-list implementation of a Stack in C++ ---" << endl;
    Stack s1;

    // Add elements to the stack
    s1.push(45);
    s1.push(63);
    s1.push(101);

    // Return the top element without removing it
    cout << "Top element: " << s1.peek() << endl;

    // Remove an element
    s1.pop();

    // Check the top element after removing
    cout << "Top element after removing: " << s1.peek() << endl;

    return 0;

}