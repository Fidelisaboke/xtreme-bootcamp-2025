#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string file_text; // Stores text from file

    // Create an ifstream object for reading files
    ifstream my_file("samples/stuff.txt");

    // Looping through each line of the file
    while(getline (my_file, file_text)) {
        cout << file_text << "\n";
    }

    // Close the file
    my_file.close();


    return 0;
}