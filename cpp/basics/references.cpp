/* C++ References
* - Referencing: A technique of using multiple variables to point to the same value in memory.
* - Reference variable -> used as an alias for an existing variable.
* https://www.w3schools.com/cpp/cpp_references.asp
*/

#include <iostream>
using namespace std;

int main(){
    int addition = 5 + 3;

    // Creating a reference variable (denoted by &variable_name)
    int &summation = addition;

    // Printing the values before changing
    cout << "Addition before changing: " << addition << endl;
    cout << "Summation before changing: " << summation << endl;

    // Changing the value of summation -> should also change the value of addition
    summation = 4 + 12; // same result for: addition = 4 + 12

    // Printing the values after changing
    cout << "Addition after changing: " << addition << endl;
    cout << "Summation after changing: " << summation << endl;

    /* Retrieving Memory Address
    * Using & before a variable name can also be used to retrieve the memory address of a variable.
    */

    float price = 40.99;
    cout << "Location of variable \'price\': " << &price << endl;

    return 0;
}