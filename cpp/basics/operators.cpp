#include <iostream>
using namespace std;

int main(){
    /* Basic arithmetic operators 
    * - Used to perform basic arithmetic operations
    * - Includes addition, subtraction, multiplication, division, and modulo
    */
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


    /* Assignment Operators 
    * - Assigns a value to a variable
    * - Can be used to assign the result of an expression to a variable
    */
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


    /* Comparison Operators 
    * - Compares two values, returning either 1 (true) or 0 (false)
    */
    cout << "\n--- Comparison operators ---" << endl;

    // Values to compare
    int x = 3;
    int y = 5;

    // Less than (<)
    cout << "x less than y: " << (x < y) << endl;

    // Greater than (>)
    cout << "x greater than y: " << (x > y) << endl;

    // Less than or equal to (<=)
    cout << "x less than or equal to y: " << (x <= y) << endl;

    // Greater than or equal to (>=)
    cout << "x greater than or equal to y: " << (x >= y) << endl;

    // Equal to (==)
    cout << "x equal to y: " << (x == y) << endl;

    // Not equal to (!=)
    cout << "x not equal to y: " << (x != y) << endl;
    

    /* Logical Operators
    * - Used to combine multiple conditions
    * - Includes AND (&&), OR (||), and NOT (!)
    */
    cout << "\n--- Logical Operators ---" << endl;

    // Values to compare
    int a = 1;
    int b = 0;

    // Logical AND (&&)
    cout << "a AND b: " << (a && b) << endl;

    // Logical OR (||)
    cout << "a OR b: " << (a || b) << endl;

    // Logical NOT (!)
    cout << "NOT a: " << (!a) << endl;
    cout << "NOT b: " << (!b) << endl;


    /* Bitwise Operators
    * - Used to perform bit-level operations
    * - Values are converted to binary numbers, and operations are performed bit by bit
    * - Includes AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>)
    */
    cout << "\n--- Bitwise Operators ---" << endl;

    // Values to compare
    int p = 5; // Binary: 0101
    int q = 3; // Binary: 0011

    // Bitwise AND (&)
    cout << "p AND q: " << (p & q) << endl; // Result: 1 (Binary: 0001)

    // Bitwise OR (|)
    cout << "p OR q: " << (p | q) << endl; // Result: 7 (Binary: 0111)

    // Bitwise XOR (^)
    cout << "p XOR q: " << (p ^ q) << endl; // Result: 6 (Binary: 0110)

    // Bitwise NOT -> Complement (~)
    cout << "NOT p: " << (~p) << endl; // Result: -6 (Binary: 1010)

    // Left shift (<<)
    cout << "p left shift by 1: " << (p << 1) << endl; // Result: 10 (Binary: 1010)

    // Right shift (>>)
    cout << "p right shift by 1: " << (p >> 1) << endl; // Result: 2 (Binary: 0010)

    return 0;
}