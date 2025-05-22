// Include libraries you want to use
#include <iostream> // Input-Output Stream Library

// Standard namespace library (use if you want to omit 'std::' from code)
// - Otherwise it's not recommended due to library conflicts
using namespace std; 

/**
* Main function: Entry point of every Cpp program
* Also known as the driver code: runs objects/functions defined
 */
int main() {
    /* Basic variables - Variable declarations*/
    char grade; // Characters: Stores single characters (e.g. 'X', 'Y', 'b').
    bool is_complete; // Boolean: Can be true, false, 1, or 0.
    float price; // Float: Stores decimal numbers.
    double percentage_profit; // Double: Stores decimal numbers but more precise.
    int first_number; // Integer: Whole numbers (both +ve and -ve).
    unsigned int age; // Unsigned Integer: Non-negative whole numbers.
    long int sample_size; // Long Integer: Same as integer but can store larger values.
    long long int population_size; // Long Long Integer: Long integer but even larger

    /* Constants - Can only be assigned once */
    #define FILE_SIZE = 1024; // #define: global constant definition
    const int student_number = 707070; // const: block-scoped or function-scoped constant

    /* Basic Input-Output */
    // std::cout -> Console output
    // std::cin -> Console input
    // std::endl -> End of line (Go to the next line of the output stream)
    // "\n" -> Newline character: Can be used in place of 'std::endl'

    std::cout << "Hello World!" << std::endl; // Output to console (left pointing arrows)
    std::cout << "Enter your age: "; // Output to console
    std::cin >> age; // Input from console
    std::cout << "Your age is: " << age << std::endl; // Output to console (value entered)

}