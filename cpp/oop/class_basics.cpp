// C++ Class basics
#include <iostream>
#include <string>
using namespace std;

/**
* A student class
 */
class Student {
    // public access modifier
    public:
        // Public attributes
        unsigned int id;
        string fullName;

        // Public method -> Defined inside class
        void displayDetails(){
            cout << "ID: " << id << endl;
            cout << "Full Name: " << fullName << endl;
        }
};

class Teacher {
    public:
        // Public attributes
        string fullName;
        string subjects[2];

        // Public method
        void displayDetails(){
            cout << "Full Name: " << fullName << endl;
            for(string subject: subjects){
                cout << "Subject: " << subject << endl;
            }
        }

        // Method with no definition
        void teach();
};

// Method defined outside the Teacher class -> use the scope resolution operator `::`
// - This method has to be declared in the class first before proceeding to define it.
void Teacher::teach(){
    cout << "The teacher is teaching." << endl;
}

/**
* A book class
 */
class Book {
    public:
        // Public attribute
        string title;
        string author;
        unsigned int year;
        bool isAvailable;

        // Public method
        void displayDetails(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Year: " << year << endl;
            cout << "isAvailable: " << isAvailable << endl;
        }
};

int main(){    
    // Creating objects -> Student objects
    Student studentOne;
    Student studentTwo;

    // Creating object -> Teacher object
    Teacher teacherOne;

    // Creating object -> Book object
    Book bookOne;

    // Assign attributes -> studentOne attributes
    studentOne.id = 32932;
    studentOne.fullName = "John Doe";

    // Assign attributes -> studentTwo attributes
    studentTwo.id = 34521;
    studentTwo.fullName = "Jane Doe";

    // Assign attributes -> teacherOne attributes
    teacherOne.fullName = "Jane Brown";
    teacherOne.subjects[0] = "Biology";
    teacherOne.subjects[1] = "Chemistry";

    // Assign attributes -> bookOne attributes
    bookOne.title = "Basics of C++";
    bookOne.author = studentOne.fullName; // Setting an attribute of one object to another
    bookOne.year = 2021;
    bookOne.isAvailable = true;

    // Printing details
    cout << "--- Student One ---" << endl;
    studentOne.displayDetails();

    cout << "--- Student Two ---" << endl;
    studentTwo.displayDetails();

    cout << "--- Teacher One ---" << endl;
    teacherOne.displayDetails();

    cout << "--- Book One ---" << endl;
    bookOne.displayDetails();

    // Call the teach() method
    teacherOne.teach();

    return 0;
}