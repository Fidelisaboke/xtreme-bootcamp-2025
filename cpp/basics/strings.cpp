#include <iostream>

// Import the string library - required for working with strings in C++.
#include <string>

using namespace std;

int main(){
    // Creating a string
    string start_date = "22-05-2025";

    // Output the string to console
    cout << "Start Date: " << start_date << endl;

    // String concatenation
    string first_name = "John";
    string last_name = "Doe";
    string full_name = first_name + " " + last_name; // Concatenate first_name and last_name
    cout << "Full Name: " << full_name << endl;

    // Length of a string
    cout << "Length of first_name: " << first_name.length() << endl;
    cout << "Length of last_name: " << last_name.size() << endl;

    // Accessing string character -> use bracket notation []
    cout << "First character of first_name: " << first_name[0] << endl; // 1st character
    cout << "Last character of last_name: " << last_name[last_name.length()-1] << endl;

    // Change characters -> access with index and set
    first_name[1] = 'A';
    cout << "first_name after change: " << first_name << endl;

    // Note: string.at() can be used instead of bracket notation
    cout << "Second character of last_name: " << last_name.at(1) << endl;

    // Additional Reading: Escape sequences - https://www.w3schools.com/cpp/cpp_strings_esc.asp

    // User Input Strings
    string address;
    cout << "Enter your address: ";
    //cin >> address; // Note: cin only stores a single word
    cout << "Address is: " << address << endl;

    // Reading a line of text
    string next_of_kin;
    cout << "Enter next of kin full name: ";
    getline(cin, next_of_kin); // Reads a line of text and stores it in next_of_kin
    cout << "Next of kin is: " << next_of_kin << endl;

    /* C-Style Strings
    * - Are created with the `char` type
    */
    char hobby[] = "Football"; // Array of chars
    cout << "Hobby: " << hobby << endl;

    return 0;
}