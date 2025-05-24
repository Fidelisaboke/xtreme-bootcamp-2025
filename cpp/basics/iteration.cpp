#include <iostream>
using namespace std;

int main(){
    /* Iteration
    * - Refers to execution of a set of instructions a certain number of times.
    * While loop, Do/While loop, For Loop
    */


    /* while loop: executes as long as the condition is true */
    cout << "--- While Loop ---:" << endl;
    int i = 0;
    while (i < 5) {
        cout << "i: " << i << endl;
        i++;
    }

    /* infinite loop! (Run at your own risk)
    cout << "Infinite Loop:" << endl;
    while (true) {
        cout << "This will run forever!" << endl;
    }
    */


    /* do-while loop: executes at least once */
    cout << "\n--- Do While Loop ---:" << endl;
    int j = 0;
    do {
        cout << "j: " << j << endl;
        j++;
    } while (j < 5);


    /* for loop: a more 'compact' alternative to while loops */
    cout << "\n-- For Loop: ---" << endl;
    for(int k = 0; k < 10; k++){
        cout << "k: " << k << endl;
    }


    /* Nested for loops */
    cout << "\n--- Nested For Loops: ---" << endl;
    for(int a = 0; a < 4; a++){
        cout << "a: " << a << endl;
        for(int b = 0; b < 2; b++){
            cout << "b: " << b << endl;
        }
    }


    /* for-each loops -> useful for iterating through elements in an iterable */
    cout << "\n--- Foreach Loops: ---" << endl;

    // Array of prices (an iterable)
    double prices[3] = {14.99, 56.99, 750.49};

    // Iterate through the prices (for-each)
    for(double price: prices){
        cout << "Price: " << price << "$" << endl;
    }


    /* Break statement 
    * - Used to 'prematurely' exit a loop, stopping its complete execution
    */
    cout << "\n--- Break statement: ---" << endl;
    for (int i = 0; i < 5; i++){
        if (i == 2) {
            break; // Stop the loop if i == 2
        }
        cout << i << endl;
    }

    /* Continue statement
    * - Used to advance to the next iteration
    * - Skips execution of statements that follow the condition that triggers it, going to the next iteration
    */
    cout << "\n--- Continue statement: ---" << endl;
    for (int i = 0; i < 5; i++){
        if (i == 2) {
            continue; // Skip to the next iteration if i == 2
        }
        cout << i << endl;
    }

    return 0;
}