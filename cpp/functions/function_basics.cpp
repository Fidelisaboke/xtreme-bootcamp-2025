// C++ Functions -> https://www.w3schools.com/cpp/cpp_functions.asp

#include <iostream>
#include <string>
using namespace std;


/**
* @brief A simple greeting function. 
* - This function has no parameters, and does not return a value.
*/
void greet(){
    cout << "Hello World!" << endl;
}


/**
* @brief Prints a name on the console. 
* - This function accepts one parameter with a default value, and does not return a value.
* 
* @param name The name to be printed on the console. Default value is `Doe`.
*/
void displayName(string name = "Doe"){
    cout << "Name: " << name << endl;
}


/**
* @brief Calculates and returns the area of a rectangle, given the length and the width.
* - This function has two parameters, and returns a value of type `int`.
* 
* @param length The length of the rectangle.
* @param width The width of the rectangle.
* @return The area of the rectangle.
*
 */
int calculateRectangleArea(int length, int width){
    return length * width;
}


/**
* @brief Swaps the value of two integer variables.
* - This function accepts variable references, which is useful for changing the values of arguments.
* - No need to return values as the original variables will be changed.
* 
* @param x A reference to the first integer varable.
* @param y A reference to the second integer.
 */
void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

/**
* @brief Returns the sum of 3 values in an array.
* - This function has a parameter that accepts an array.
*
* @param numbers An array of 3 numbers.
 */
int addArrayValues(int numbers[3]){
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += numbers[i];
    }
    return sum;
}

/* Passing struct to functions */
struct Student {
    unsigned int id;
    string full_name;
    int age;
};

/**
* @brief Displays student details.
* - This function takes in a struct (Student). This is useful for working with grouped data in a
* function.
*
* @param s A struct of type `Student`.
 */
void displayStudentDetails(Student s){
    cout << "ID: " << s.id << ", Name: " << s.full_name << ", Age: " << s.age << endl;
}

/** 
* @brief Increases student age.
* - This function takes in a struct reference. Useful for modifying the struct's data.
*
* @param s A reference of struct `Student`.
*
*/
void increaseAge(Student& s){
    s.age++;
}

/** Most commonly defined function in C++.
* - It runs the main operations of a C++ program.
* - It returns an integer representing the exit code (or exit status).
*/
int main(){
    // Call greet function - Basic function
    greet();

    // Display name function - Function with one parameter, having a default value
    displayName(); // Name: Doe
    displayName("John"); // Name: John

    // Calculating and displaying the area of a rectangle - Function that returns a value
    int rectangle_area = calculateRectangleArea(15, 4);
    cout << "Area of rectangle: " << rectangle_area << endl;

    /* Passing references to functions */
    int num1 = 12;
    int num2 = 7;

    // Before swapping
    cout << "Before swap: " << endl;
    cout << num1 << ", " <<num2 << endl;

    // Swap the values of num1 and num2 - Function that takes in references
    swapNums(num1, num2);

    // After swapping
    cout << "After swap: " << endl;
    cout << num1 << ", " << num2 << endl;

    // Add the values of an array 
    int numbers_array[3] = {2, 7, 8};
    int array_sum = addArrayValues(numbers_array); // Pass array as an argument
    cout << "Sum of array: " << array_sum << endl;

    // Creating and displaying a struct of type `Student`
    Student student = {9876, "John Brown", 20};
    displayStudentDetails(student); // Pass in the student struct

    // Increase student age
    increaseAge(student);

    // Return 0 to indicate successful program execution
    return 0;
}