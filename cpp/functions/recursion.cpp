/** Recursion
* - A technique for making a function call itself
* - Useful for breaking down complicated problems into subproblems (e.g. backtracking)
 */

#include <iostream>
using namespace std;

/**
* @brief Continuously divides a number by two.
*
* @param n Number to be divided by two
* @return A count of the number of times the number has been divided by two.
 */
int divideByTwo(int n) {
    if(n < 2){
        return 0;
    } 

    // Recursively call the function if n >= 2
    return 1 + divideByTwo(n / 2);
}

int main(){
    int x = 32;
    cout << "Value of x: " << x << endl;
    cout << "Number of times x can be divided by two: " << divideByTwo(x) << endl;

    return 0;
}