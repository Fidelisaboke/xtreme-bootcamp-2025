/** Encapsulation
* - A fundamental prnciple of Object-Oriented Programming that involves bundling the object's
* attributes and methods into a single unit, protecting external access and modification.
*
* https://www.w3schools.com/cpp/cpp_encapsulation.asp
 */

#include <iostream>
using namespace std;

class Car {
    private:
        // Private attribute
        int speed;

    public:
        // Setter for speed
        void setSpeed(int s){
            speed = s;
        }

        // Getter for speed
        int getSpeed(){
            return speed;
        }

};

int main() {
    Car car;

    // Set speed using the setter function
    car.setSpeed(100);

    // Get and display the speed
    cout << "Car speed: " << car.getSpeed() << endl;

    return 0;
}