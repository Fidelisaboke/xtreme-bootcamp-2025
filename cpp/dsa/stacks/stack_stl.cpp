#include <iostream>
#include <string>

// Include the stack library
#include <stack>

using namespace std;

int main(){
    // Declare a stack first
    stack<string> fruits;

    // Insert elements to the stack - use .push()
    fruits.push("Kiwi");
    fruits.push("Mango");
    fruits.push("Apple");
    fruits.push("Watermelon");
    fruits.push("Orange");

    // Access the top element - use .top()
    cout << "Fruit at the top: " << fruits.top() << endl;

    // Modify the top element
    fruits.top() = "Banana";
    cout << "New fruit at the top: " << fruits.top() << endl;

    // Remove elements - use .pop()
    fruits.pop();
    cout << "Top fruit after popping: " << fruits.top() << endl;

    // Obtain the size of the stack - use .size()
    cout << "Current stack size: " << fruits.size() << endl;

    // Check if stack is empty - use .empty()
    cout << "Is fruits stack empty: " << fruits.empty() << endl;
    
    // For an empty stack
    stack<char> grades;
    cout << "Is grades stack empty: " << grades.empty() << endl;

    // Creating a copy of a stack
    // A good way of 'traversing' a stack without affecting the original
    stack<string> fruits_two(fruits);
    cout << "Fruits stack elements: ";
    while(!fruits_two.empty()) {
        cout << fruits_two.top() << " ";
        fruits_two.pop();
    }

    // More info: https://www.geeksforgeeks.org/stack-in-cpp-stl/
}