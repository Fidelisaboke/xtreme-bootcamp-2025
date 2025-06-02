/** Deque (Double-ended queue) in C++ STL
* - A queue that allows deletion of items from the front and back
 */

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    // Declaring a deque
    deque<string> people; // Empty deque
    deque<string> fruits = {"Mango", "Banana", "Avocado", "Kiwi"}; // Adding elements at declaration

    // Printing elements of a deque
    cout << "--- Fruits deque ---:\n";
    for(string fruit: fruits){
        cout << fruit << "\n";
    }
    
    // Accessing elements
    cout << "\n-- Accessing specific deque elements ---:\n";
    cout << "First fruit: " << fruits.front() << "\n";
    cout << "Last fruit: " << fruits.back() << "\n";

    // Deques can also be indexed
    cout << "Second fruit: " << fruits[1] << "\n";
    cout << "Third fruit: " << fruits.at(2) << "\n";

    // Modifying an element - Similar to arrays
    cout << "\n-- Modifying deque elements ---:\n";
    fruits.at(1) = "Watermelon";
    cout << "New second fruit: " << fruits.at(1) << "\n";

    /* Adding deque elements */
    cout << "\n-- Adding deque elements ---:\n";

    // Add to the front
    cout << "Current front element: " << fruits.front() << "\n";
    fruits.push_front("Orange");
    cout << "New front element: " << fruits.front() << "\n";

    // Add to the back
    cout << "Current back element: " << fruits.back() << "\n";
    fruits.push_back("Strawberry");
    cout << "New back element: " << fruits.back() << "\n";

    /* Removing deque elements */
    cout << "\n-- Removing deque elements ---:\n";
    // Remove from the front
    cout << "Current front element: " << fruits.front() << "\n";
    fruits.pop_front();
    cout << "New front element: " << fruits.front() << "\n";

    // Remove from the back
    cout << "Current back element: " << fruits.back() << "\n";
    fruits.pop_back();
    cout << "New back element: " << fruits.back() << "\n";

    // Check deque size
    cout << "People deque size: " << people.size() << "\n";
    cout << "Fruits deque size: " << fruits.size() << "\n";

    // Check if a deque is empty
    cout << "People deque empty: " << people.empty() << "\n";
    cout << "Fruits deque empty: " << fruits.empty() << "\n";

    return 0;
}