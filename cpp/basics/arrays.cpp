#include <iostream>
#include <string>

// Include vectors for creating dynamic-size arrays - useful for CP problems:
#include <vector>

using namespace std;

int main(){
    /* Arrays
    * - One of the most critical data structures in CP.
    * - Used to store multiple values (called elements) in a single variable
    */
    cout << "|--- C++ ARRAYS ---|" << endl;

    /* Creating arrays */
    cout <<"\n--- Creating arrays ---" << endl;

    // Array declaration
    string fruits[5]; // Create without specifying values

    // Assign values after declaration
    fruits[0] = "Apple";
    fruits[1] = "Banana";
    fruits[2] = "Pomegranate";
    fruits[3] = "Kiwi";
    fruits[4] = "Orange";

    // Array initialization
    int numbers[3] = {30, 60, 70}; // Specify values according to array size

    // No need to specify array size when initializing (Not good practice though)
    string usernames[] = {"doe237", "johnjohn56", "doc12brown"};

    // But you MUST specify size in declaration to eventually add values, otherwise you get an error
    // float prices[]; // error: storage size of ‘prices’ isn’t known

    // Accessing array elements - using bracket notation []
    cout << numbers[1] << " is a number." << endl;

    // Modifying an array element
    numbers[1] = 8945;
    cout << "New number at index 1: " << numbers[1] << endl;


    /* Looping through array */
    // Using for loop
    cout << "\n--- Looping through array using For Loop ---:" << endl;
    for (int i = 0; i < 3; i++){
        cout << "index: " << i << ", value: " << numbers[i] << endl;
    }

    // Using for-each loop: Exclusively for iterables (arrays, lists, vectors, etc...)
    cout << "\n--- Looping through array using For-each Loop ---:" << endl;
    for(int number: numbers){
        cout << number << endl;
    }


    /* Fixed Size and Dynamic Size */
    cout << "\n--- Fixed Size and Dynamic Size ---:" << endl;

    // Arrays are fixed-size:
    string sports[2] = {"Hockey", "Volleyball"};
    // sports[3] = "Football"; // Results in an error

    // Vectors are resizable:
    cout << "-> Vectors are resizable: " << endl;

    // Initializing a vector
    vector<float> sales = {56500.50, 75609.956};

    // Print out initial vector values
    cout << "Initial vector values:" << endl;
    for(float sale: sales){
        cout << sale << endl;
    }

    // Adding another element to the vector
    sales.push_back(800.23);

    // Print out after adding vector values
    cout << "\nAfter adding vector value:" << endl;
    for(float sale: sales){
        cout << sale << endl;
    }

    return 0;
}