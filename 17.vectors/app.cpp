#include <iostream>
#include <vector>
using namespace std;

int main(){

    // ** Vector **
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
    for (string car : cars) {
        cout << car << "\n";
    }

    //**Access a Vector **
    cout << "First car: " << cars[0] << "\n"; 

    // Get the **first element** with vactor's method
    cout << cars.front() << endl;

    // Get the **last element** with vector's method
    cout << cars.back() << endl;

    // for accessing spacific element, you can use the at() method
    cout << cars.at(2) << endl; // Access the third element (index 2)

    // ** Change a Vector Element **
    cars[0] = "Opel";
    cout << "Updated first car: " << cars[0] << endl;

    // You can also use the at() method to change an element
    cars.at(0) = "Opel2";
    cout << cars.at(0) << endl;

    // **add vactor element**
    cars.push_back("Audi");
    cout << "Added car: " << cars.back() << endl;

    // **Remove Vector Elements**
    cars.pop_back(); // Remove the last element
    cout << "Removed last car: " << cars.back() << endl;

    // **Vector Size**
    cout << "Number of cars: " << cars.size() << endl;


    // ** Check if a Vector is Empty **
    cout << "Is the vector empty? " << cars.empty() << endl;


    // ** Loop Through a Vector **

    for (size_t i = 0; i < cars.size(); i++)
    {
        cout << cars[i] << endl;
    }
    
    return 0;
}
