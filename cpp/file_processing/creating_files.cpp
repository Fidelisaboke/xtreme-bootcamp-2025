#include <iostream>
#include <fstream> // Import the file stream library -> for the ofstream class
using namespace std;

int main() {
    // Create an open a text file
    ofstream my_file("output/myfile.txt");

    // Write to the file
    my_file << "This is a new file. Lorem ipsum blahblahblah...";

    // Close the file
    my_file.close();

    return 0;

}