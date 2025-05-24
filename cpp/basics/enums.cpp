/* Enums 
* https://www.w3schools.com/cpp/cpp_enum.asp
* -> Special type representing a group of unchangeable values (constants)
*/

#include <iostream>
using namespace std;

/* Simple enum (representing the log level, maybe for use in system logs)
* - Uses default values, i.e.:
* INFO -> 0
* DEBUG -> 1
* WARNING -> 2
* ERROR -> 3
*/
enum LogLevel{
    /* Enum items*/
    INFO,
    DEBUG,
    WARNING,
    ERROR
};

/* Enum with initial values set to variables */
enum Grade{
    D = 10,
    C = 30,
    B = 50,
    A = 70,
    S = 100
};

/* Enum with initial value set to the first variable only */
enum FeedbackStatus{
    BAD = 3,
    FAIR, // Takes the value of BAD + 1
    GOOD, // Takes the value of BAD + 2
};

int main(){
    // Accessing the enums
    enum LogLevel log_level = WARNING;
    enum Grade grade = S;
    enum FeedbackStatus feedback_status = GOOD;

    // Print the enum variables
    cout << "Log level enum value: " << log_level << endl;
    cout << "Grade enum value: " << grade << endl;
    cout << "Feedback status enum value: " << feedback_status << endl;
    
    return 0;
}