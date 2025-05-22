#include <iostream>
using namespace std;

int main(){
    /* Basic rithmetic operators */
    cout << "--- Arithmetic Operators ---" << "\n";
    int sum = 50 + 230; // Addition (+)
    int difference = 100 - 70; // Subtraction (-)
    int product = 3 * 2; // Multiplication (*)
    float quotient = 5 / 3; // Division (/)
    int modulus = 4 % 3; // Modulo (%)

    /* Results */
    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << difference << "\n";
    cout << "Product: " << product << "\n";
    cout << "Quotient: " << quotient << "\n";
    cout << "Modulus: " << modulus << "\n";

    /* Incrementing */
    int i = 1;
    cout << "i Before Increment: " << i << "\n";
    i++; // Increment (++), can also be ++i
    cout << "i After Increment: " << i << "\n";

    /* Decrementing */
    int j = 3;
    cout << "j Before Increment: " << j << "\n";
    j--; // Decrement (--), can also be --j
    cout << "j After Decrement: " << j << "\n";

    // Q: What's the difference b/n i++ and ++i?
    // A: https://community.lambdatest.com/t/what-is-the-difference-between-i-and-i/30600/4

    /* Assignment Operators */
    cout << "\n--- Assignment Operators ---" << endl;

    // Assignment (=)
    int my_val = 5;
    cout << "my_val after assignment: " << my_val << endl;

    // Addition assignment (+=)
    my_val += 3; // Equivalent to: my_val = my_val + 3
    cout << "my_val after addition assignment: " << my_val << endl;

    // Subtraction assignment (-=)
    my_val -= 2; // Equivalent to: my_val = my_val - 2
    cout << "my_val after subtraction assignment: " << my_val << endl;

    // Multiplication assignment (*=)
    my_val *= 4; // Equivalent to: my_val = my_val * 2
    cout << "my_val after multiplication assignment: " << my_val << endl;

    // Division assignment (/=)
    my_val /= 2; // Equivalent to my_val = my_val / 2
    cout << "my_val after division assignment: " << my_val << endl;

    // Modulo assignment (%=)
    my_val %= 5;
    cout << "my_val after modulo assignment: " << my_val << endl;

    // Other assignment operators: https://www.w3schools.com/cpp/cpp_operators_assignment.asp

    return 0;
}