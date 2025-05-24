/* C++ Pointers
* https://www.w3schools.com/cpp/cpp_pointers.asp
* Pointer - Variable that stores the memory address of another variable as its value
*/

#include <iostream>
using namespace std;

int main() {
    int x = 10;

    // Pointer to variable x
    int* ptr1 = &x;   // ptr1 stores the address of x

    // Pointer to the pointer of variable x
    int** ptr2 = &ptr1; // ptr2 stores the address of ptr1 (Pointer of a pointer)

    // Checking addresses and values
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr1: " << ptr1 << endl; // Address of x
    cout << "Address of ptr1: " << &ptr1 << endl;
    cout << "Value of ptr2: " << ptr2 << endl; // Address of ptr1

    // Dereferencing (use * to get values pointed to by pointers -> dereference operator)
    cout << "Value pointed to by ptr1: " << *ptr1 << endl; // Value of x
    cout << "Value pointed to by ptr2: " << *ptr2 << endl; // Address of ptr1
    cout << "Value pointed to by the pointer pointed to by ptr2: " << **ptr2 << endl; // Value of x

    // Modify the value of x through ptr2
    **ptr2 = 20; // ptr2 -> ptr1 -> x
    cout << "Modified value of x: " << x << endl;

    // Modify ptr1 to point to a different variable
    int y = 30;
    *ptr2 = &y; // *ptr2 == ptr1
    cout << "Value pointed to by ptr1 after modification: " << *ptr1 << endl; // Value of y
    cout << "Value pointed to by the pointer pointed to by ptr2 after modification: " << **ptr2 << endl; // Value of y

    return 0;
}