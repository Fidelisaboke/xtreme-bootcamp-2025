#include <iostream>
#include <string>
using namespace std;

// Base class
class Shape {
    public:
        // Original .info() method
        void info(){
            cout << "This is a shape." << endl;
        }
};

class Triangle: public Shape {
    public:
        // .info() Modified from Shape class
        void info(){
            cout << "This is a triangle." << endl; 
        }
};

class Circle: public Shape {
    public:
        // .info() Modified from Shape class
        void info(){
            cout << "This is a circle." << endl; 
        }
};


int main(){
    // Objects
    Shape shape;
    Triangle triangle;
    Circle circle;

    // Invoking the .info() funcction
    shape.info();
    triangle.info();
    circle.info();

    return 0;
}