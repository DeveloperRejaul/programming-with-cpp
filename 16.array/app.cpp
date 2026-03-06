#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // **dicler array** content 4 string
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    // for number 
    int myNum[3] = {10, 20, 30};

    // access array element
    cout << cars[0] << endl; // Output: Volvo
    cout << myNum[1] << endl; // Output: 20


    // Change an Array Element
    cars[0] = "Opel";
    cout << cars[0] << endl; // Output: Opel


    // **Arrays and Loops**
    for (int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
    }

    // foreach Loop
    for (int num : myNum) {
        cout << num << "\n";
    }

    // **Omit Array Size**
    string cars2[] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars2[0] << endl; // Output: Volvo


    // **Vectors - Dynamic Size** Example
    // A vector with 3 elements
    vector<string> cars3 = {"Volvo", "BMW", "Ford"};

    // Adding another element to the vector
    cars3.push_back("Tesla");
    cout << cars3[3] << endl; // Output: Tesla


    // ** Array Size ** **sizeof()** returns the **total size in bytes** of the array, and sizeof(myNum[0]) returns the size of a single element. By dividing the total size by the size of one element, you get the number of elements in the array.
    int getArrayLength = sizeof(myNum) / sizeof(myNum[0]);
    cout << getArrayLength << endl; // Output: 3
    

    // Multi-Dimensional Arrays
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };
    string letters2[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    cout << letters[0][2] << endl;  // Outputs "C"
    cout << letters2[0][1][0] << endl;  // Outputs "C"
    return 0;
}
