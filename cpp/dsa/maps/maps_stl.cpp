/* Maps -> key/value stores */

#include <iostream>
#include <string>
#include <map> // std::map library
using namespace std;

int main() {
    // Initialize a map
    map<string, double> car_prices; // Definition without initialization
    map<string, int> students = {{"Brown", 1000}, {"Doe", 1001}, {"John", 1002}, {"Zuri", 909}};
    map<string, float> fruits_stock = {{"Apple", 0.50}, {"Mango", 1.29}};

    // Access a map elemnt - refer to its key inside square brackets, or using .at(keyvalue)
    cout << "--- Accessing a Map Element ---:" << "\n";
    cout << "Brown's ID No: " << students["Brown"] << "\n";
    cout << "Zuri's ID No: " << students.at("Zuri") << "\n";

    // Update the value of a map element
    cout << "\n--- Update a Map Element ---:" << "\n";
    cout << "Doe's current ID No: " << students.at("Doe") << "\n";
    students.at("Doe") = 6789;
    cout << "Doe's new ID No: " << students.at("Doe") << "\n";

    // Add a new map element
    cout << "\n--- Add a new Map Element ---:" << "\n";
    students["Jane"] = 987; // Bracket notation
    students.insert({"Yani", 2781}); // .insert() function
    cout << "Jane => " << students.at("Jane") << "\n";
    cout << "Yani => " << students.at("Yani") << "\n";

    // Adding two elements with the same key
    cout << "\n--- Add duplicate keys ---:" << "\n";
    students.insert({"Alex", 212});
    students.insert({"Alex", 303});
    cout << "Alex => " << students.at("Alex") << "\n"; // Only the first is preserved

    // Remove elements
    students.clear();

    // Finding the size of a map
    cout << "\n--- Size of maps ---" << "\n";
    cout << "\nSize of fruits map: " << fruits_stock.size() << "\n";
    cout << "Size of students map: " << students.size() << "\n";
    cout << "Size of car prices map: " << car_prices.size() << "\n";

    // Check if a map is empty
    cout << "\n--- Check if a map is empty ---:" << "\n";
    cout << "\nIs fruits stock map empty: " << fruits_stock.empty() << "\n";
    cout << "Is students map empty: " << students.empty() << "\n";
    cout << "Is car prices map empty: " << car_prices.empty() << "\n";

    // Check if an element exists
    cout << "\n--- Check if a map element exists ---:" << "\n";
    cout << "Mango exists in fruits stock: " << fruits_stock.count("Mango") << "\n";
    cout << "Banana exists in fruits stock: " << fruits_stock.count("Banana") << "\n";

    // Looping through a map
    cout << "\n--- Looping through a map ---:" << "\n";
    for(auto fruit: fruits_stock){
        cout << fruit.first << " => " << fruit.second << "\n"; // .first -> key, .second -> value
    }

    // Looping in reverse
    map<string, float, greater<string>> fruits_stock_desc = {{"Apple", 0.50}, {"Mango", 1.29}};
    cout << "\n--- Looping through a map in reverse ---:" << "\n";
        for(auto fruit: fruits_stock_desc){
        cout << fruit.first << " => " << fruit.second << "\n"; // .first -> key, .second -> value
    }

    return 0;
}