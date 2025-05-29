/** C++ Class Constructors
* - Used to create objects of a class
*
* Constructor Rules:
* - The constructor has the same name as the class.
* - It has no return type (not even void).
* - It is usually declared public.
* - It is automatically called when an object is created.
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        // private attributes
        string title;
        string author;
        int pages;

    public:
        /** Default constructor
        * - The default constructor of a class. Implicitly declared if not defined.
         */
        Book(){
            cout << "Default constructor has been called." << endl;
        }

        /** Parametized constructor
        * - Constructor with parameters, just like functions
         */
        Book(string title, string author, int pages){
            /* 'this' keyword points to the current object, similar to 'self' in Python, and 'this'
            in Java */
            this->title = title;
            this->author = author;
            this->pages = pages;
            cout << "Parametized constructor with attributes called." << endl;
        }

        // Only title -> a case of constructor overloading
        Book(string title){
            this->title = title;
            cout << "Constructor overloading: only title initialized by this." << endl;
        }

        // Constructor declared without definition -> Definition outside the class
        Book(string author, int pages);

        // Method to display attributes
        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Pages: " << pages << endl;
        }
};

Book::Book(string author, int pages){
    this->author = author;
    this->pages = pages;
}

//

int main() {
    cout << "--- Book book1 ---" << endl;
    Book book1; // Default constructor
    book1.display();

    cout << "\n--- Book book2 ---" << endl;
    Book book2("1984", "George Orwell", 328); // Parameterized constructor
    book2.display();

    cout << "\n--- Book book3 ---" << endl;
    Book book3("The Catcher in the Rye"); // Title-only constructor
    book3.display();

    return 0;
}