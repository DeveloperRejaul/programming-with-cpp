#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // **Dereference**
    // **Get Memory Address and Value**
    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    // **Modify Pointers**
    *ptr = "Hamburger";
    cout << *ptr << "\n"; // Output the new value of the pointer (Hamburger)
    cout << food << "\n"; // Output the new value of the food variable (Hamburger)
    return 0;
}
