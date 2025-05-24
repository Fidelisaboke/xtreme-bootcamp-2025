/* C++ Structures (Structs)
https://www.w3schools.com/cpp/cpp_structs.asp
* A way of grouping multiple variables (data members) into one place
* Can contain variables of different data types, unlike arrays
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    /* Creating a simple struct */
    cout << "--- Simple Struct in C++ ---:" << endl;

    // Simple structure
    struct Student {
        /* member variables */
        unsigned int id;
        string name;

        /* member function */
        void display_info(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "\n";
        }
        
    } student1, student2; // Structure variables

    /* Assign values to stuct data members */
    // Student 1
    student1.id = 5854543;
    student1.name = "John Doe";

    // Student 2
    student2.id = 2034345;
    student2.name = "Jane Doe";

    // Creating a brand new Student structure
    Student student3;
    student3.id = 9832344;
    student3.name = "Brown Doe";

    // Print out struct Student details
    cout << "+-- Student Details --+" << endl;

    // Student 1 info
    student1.display_info();

    // Student 2 info
    student2.display_info();

    // Student 3 info
    student3.display_info();

    return 0;
}