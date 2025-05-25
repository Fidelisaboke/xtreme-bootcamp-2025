// C++ Function Overloading -> https://www.w3schools.com/cpp/cpp_function_overloading.asp

#include <iostream>
using namespace std;

/* Overloading -> Allows multiple functions to have the same name, but with parameters of different
number or data type */

// Original function
int addNums(int a, int b){
    return a + b;
}

// Different number of parameters
int addNums(int a, int b, int c){
    return a + b + c;
}

// Different parameter types
double addNums(double a, double b){
    return a + b;
}


int main(){
    cout << "Sum of 2 integers (2, 3): " << addNums(2, 3) << endl;
    cout << "Sum of 3 integers (5, 8, 7): " << addNums(5, 8, 7) << endl;
    cout << "Sum of doubles: (3.25, 91.82): " << addNums(3.25, 91.82) << endl;

    return 0;
}