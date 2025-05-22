#include <iostream>
using namespace std;

int main(){
    /* Conditional/Selection Control Structures
    * - Statements are executed based on the fulfillment of a condition
    * - if, if-else, switch, ternary operator
    */

    // if-else statement
    int a = 10;
    if (a > 0) {
        cout << "a is positive" << endl;
    } else if (a < 0) {
        cout << "a is negative" << endl;
    } else {
        cout << "a is zero" << endl;
    }

    // switch statement: 'compact' version of if-else
    int b = 2;
    switch (b) {
        case 1:
            cout << "b is 1" << endl;
            break;
        case 2:
            cout << "b is 2" << endl;
            break;
        default: // Runs if no condition/case above is met
            cout << "b is neither 1 nor 2" << endl;
    }

    // ternary operator: shorthand of if-else.
    // variable = (condition) ? expressionTrue : expressionFalse;
    int age = 18;
    bool isAdult = (age < 18) ? false : true;
    cout << "is Adult: " << isAdult << endl;

    return 0;
}