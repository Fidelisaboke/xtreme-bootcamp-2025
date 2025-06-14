/** VIRTUAL METHODS
* - They are designed to be overridden by derive classes, enabling runtime polymorphism
* - They are marked using the 'virtual' keyword.
 */

#include <iostream>
#include <string>
using namespace std;

class User {

    public:
        string username;

        // Virtual method -> Designed to be overridden
         virtual void login(){
            cout << username << " logged in." << endl;
        }

        // Another virtual method
        virtual void logout(){
            cout << username << " logged out." << endl;
        }
};

class Admin: public User {

    public:
        // Overriding the login() method
        void login() override{
            cout << username << " logged in to superuser dashboard." << endl;
        }

        // Overriding the logout() method
        void logout(){
            cout << username << " logged out of superuser dashboard." << endl;
        }
};

int main(){
    // Create a pointer to the base class (User in this case)
    User* p_user;

    // Create an Admin object
    Admin admin;
    admin.username = "defnotadmin";

    // Assign the admin object reference to the User object
    p_user = &admin;

    // Call the login() function through the pointer (using the 'member access operator': '->')
    p_user->login(); // Equivalent to (*p_user).login()

    // Call the logout() function through the pointer
    (*p_user).logout(); // Equivalent to p_user->logout()

    return 0;
}