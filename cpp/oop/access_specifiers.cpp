/** Access Specifiers in C++
* https://www.w3schools.com/cpp/cpp_access_specifiers.asp
*  They control how the members of a class can be accessed and modified
*
* In C++, there are three access specifiers:
*
* public - members are accessible from outside the class
* private - members cannot be accessed (or viewed) from outside the class
* protected - members cannot be accessed from outside the class, however, they can be accessed in 
* inherited classes. (Check inheritance.cpp file for demonstration)
 */

#include <iostream>
#include <string>
using namespace std;

class User {
    // All public attributes and methods go here:
    public:
        string username; // public attribute

        // Public method
        void greet(){
            cout << "Hello, my username is: " << this->username << endl;
        }

    // All private attributes and methods go here:
    private:
        string password;
};


int main() {
    User user;
    user.username = "Johndoe"; // Public -> works fine
    user.password ="secretpass"; // Private -> Raises a compilation error

    return 0;
}