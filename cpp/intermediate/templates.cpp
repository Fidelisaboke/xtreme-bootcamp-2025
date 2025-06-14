/** Templates in C++
* - Used in defining placeholders (generics) for data types, allowing for functions or classes to
work with diff. data types
* Reference: https://www.w3schools.com/cpp/cpp_templates.asp
 */

#include <iostream>
using namespace std;

// Template definition
template <typename T> // Single-value template
/* Templates can have more than one placeholder, e.g.:
* template <typename T1, typename T2>
*/

// Function using template T
T subtract(T a, T b) {
  return a - b;
}

int main() {

  cout << subtract<int>(60, 30) << "\n";
  cout << subtract<double>(250.35, 1200.5) << "\n";

  return 0;
}
