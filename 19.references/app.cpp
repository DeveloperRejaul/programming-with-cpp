#include <iostream>
using namespace std;

int main()
{
    /* code */
    // **Creating References**
    // A reference variable is an alias for an existing variable. It is created using the **&** operator:
    string name = "Rezaul karim";
    string &name2 = name; // reference to food
    
    cout << name << endl;
    cout << name2 << endl;

    // ** Updating Through References **
    // If you change the value of a reference variable, the original variable will also change (and vice versa), because they both refer to the same memory location:
    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food

    meal = "Burger"; // changes both meal and food

    cout << food << "\n"; // Outputs Burger
    cout << meal << "\n"; // Outputs Burger

    // ** Memory Address **
    cout << &food; // output 0x7ff7b2f000d0 like this Memory Address
    return 0;
}
