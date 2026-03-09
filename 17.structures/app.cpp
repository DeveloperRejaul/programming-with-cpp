#include <iostream>;
using namespace std;

int main(int argc, char const *argv[])
{
    // **Create** a Structure
    struct {
        int myNum;
        string myString;
    } myStructure;

    // **Assign** values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // **Print** members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    // **Use one structure to represent two cars**:
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2;

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";


    // **Named Structures**
    struct car {  // This structure is now named "car"
        string brand;
        string model;
        int year;
    };
    // ** Name structure use**
    // Create a car structure and store it in myCar1;
    car myCar11;
    myCar11.brand = "BMW";
    myCar11.model = "X5";
    myCar11.year = 1999;

    // Create another car structure and store it in myCar2;
    car myCar22;
    myCar22.brand = "Ford";
    myCar22.model = "Mustang";
    myCar22.year = 1969;
    
    // Print the structure members
    cout << myCar11.brand << " " << myCar11.model << " " << myCar11.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}
