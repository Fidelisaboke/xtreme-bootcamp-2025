/**
* Lambda function
* - They're the anonymous functions in C++
* [capture] (parameters) { //code };
 */

#include <iostream>

// Include this library for std::function (the `function` type):
#include <functional>

using namespace std;

/** Calls another function twice.
* - This is an example used to demonstrate function parameters.
 */
void callTwice(function<void()> func){
    func();
    func();
}

int main(){
    // Simple example: 'auto' allows for 'dynamic typing'
    auto greeting = [](){
        cout << "Hello World!" << endl;
    };
    greeting(); // Call the anonymous function

    // Lambda function with parameters
    auto add = [](int a, int b){
        return a + b;
    };
    cout << "Sum: " << add(12, 15) << endl;

    /* Passing lambdas to functions */
    callTwice(greeting);

    // Passing a copy of a variable to capture clause
    int num1 = 40;
    auto square = [num1]() {
        cout << "Square of num1: " << num1 * num1 << endl;
    };
    square();

    // Capturing a variable by reference
    auto displayNumber = [&num1](){
        cout << "Value: " << num1;
    };

    // Change num1 after lambda is created
    num1 = 200;
    displayNumber(); // Displays 'Value: 200'

    return 0;
}