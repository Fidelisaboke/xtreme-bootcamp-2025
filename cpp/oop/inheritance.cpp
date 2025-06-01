/** Inheritance in C++
* A fundamental principle of OOP that involves the reuse of attributes and method of one class by 
* another class.
* Base Class (parent class) -> Class being inherited from
* Derived Class (child class) -> Class that inherits from another class
* 
* https://www.w3schools.com/cpp/cpp_inheritance.asp
 */



#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string full_name;

    /* Protected attributes and methods -> Will be inherited by child classes, and can be accessed
    by them only*/
    protected:
        void greet(){
            cout << "Hello, I am " << full_name << "." << endl;
        }
};

class Bot {
    public:
        string serial_number;
        void sayHello() {
            cout << "I am a bot!" << endl;
        }
};

// Class Student inherits from Class Person
class Student: public Person {
    public:
        int student_id;
        void introduce(){
            greet();
            cout << "My student ID is: " << student_id << endl;
        }
};

// Class BiologyStudent inherits from Student -> Multilevel inheritance
class BiologyStudent: public Student {
    public:
        void introduceFurther(){
            introduce();
            cout << "I do Biology!" << endl;
        }
};

// Class Humanoid inherits components from Person and Bot
class Humanoid: public Person, public Bot {};

int main() {
    // student1 - Demonstrating basic inheritance
    Student student1;
    student1.full_name = "John Doe";
    student1.student_id = 394211;

    // student2 - Demonstrating Multilevel inheritance
    BiologyStudent student2;
    student2.full_name = "Jane Doe";
    student2.student_id = 23741;

    // humanoid1 - Demonstrating Multiple inheritance
    Humanoid humanoid1;
    humanoid1.full_name = "Marco Polo";
    humanoid1.serial_number = "M-23421-P";

    cout << "--- Student One ---" << endl;
    student1.introduce();
    // student1.greet(); // Raises an error due to 'protected' access specifier

    cout <<"\n--- Student Two ---" << endl;
    student2.introduceFurther();

    cout << "\n--- Humanoid One ---" << endl;
    humanoid1.sayHello();

    return 0;
}