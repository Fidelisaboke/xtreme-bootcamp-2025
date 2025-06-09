#include <iostream>
#include <string>
#include <set> // The std::set library
using namespace std;


int main() {
    // Initialize a set
    set<int> numbers = {3, 50, 1, 7};

    // Print out set contents
    cout << "--- Printing numbers set values ---:" << "\n";
    for(int number: numbers){
        cout << number << "\n"; // Numbers are printed in ascending order
    }

    // Set with duplicates
    set<string> names = {"John", "Jane", "Doe", "John"};

    cout << "\n --- Printing name set values ---:" << "\n";
    for(string name: names){
        cout << name << "\n"; // The second 'John' will not be printed
    }

    // Reversing the set order in creation - use greater<type> in the angle brackets
    set<int, greater<int>> numbers_desc = {4, 123, 23, 6};
    set<string, greater<string>> names_desc = {"John", "Yani", "Doe", "Brown"};

    cout << "\n--- Printing integers in descending ---:" << "\n";
    for(int number: numbers_desc){
        cout << number << "\n"; // Numbers are printed in descending order
    }

    cout << "\n--- Printing strings in descending ---:" << "\n";
    for(string name: names_desc){
        cout << name << "\n"; // Numbers are printed in reverse alphabetical order
    }

    // Set of fruits
    set<string> fruits = {"Apple", "Banana"};
    
    // Add new elements - use the .insert() function
    fruits.insert("Mango");
    fruits.insert("Avocado");
    cout << "\n--- After inserting new fruits ---" << "\n";
    for(string fruit: fruits){
        cout << fruit << "\n"; // Strings are printed alphabetically, with new fruits showing up
    }

    // Remove elements - use the .erase() function
    fruits.erase("Mango");
    cout << "\n--- After erasing Mango ---" << "\n";
    for(string fruit: fruits){
        cout << fruit << "\n"; // Strings are printed alphabetically, with new fruits showing up
    }
    
    // Remove all elements - use .clear()
    fruits.clear();

    // Find the size of a set - use .size()
    cout << "\n--- Size of sets ---" << "\n";
    cout << "Size of numbers set: " << numbers.size() << "\n";
    cout << "Size of fruits set: " << fruits.size() << "\n";

    // Check if a set is empty
    cout << "\n--- Checking if a set is empty ---" << "\n";
    cout << "Is numbers set empty: " << numbers.empty() << "\n";
    cout << "Is fruits set empty: " << fruits.empty() << "\n";

    return 0;


}