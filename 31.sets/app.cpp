#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    // Create a set called cars that will store strings
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print set elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // **Add Elements **
    cars.insert("Toyota");
    cars.insert("Honda");
    
    // **Add Elements **
    cars.erase("Toyota");

    // Print set elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // Remove all elements
    cars.clear();
    cout << "Is the set empty? " << cars.size() << endl;

    return 0;
}
