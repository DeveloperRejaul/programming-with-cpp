#include <iostream>
using namespace std;

int main () {

    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String


    // auto x = 5; // like typescript any type. The type of x will be automatically determined by the value assigned to it. In this case, x will be of type int.
    auto x = 5; // x is now an int
    x = 10;     // OK - still an int
    x = 9.99;   // Error - can't assign a double to an int

    
    /**
     * NOTE: **float vs. double**
     * The precision of a floating point value indicates how many digits the value can have after the decimal point.
     * The precision of float is only **six or seven decimal digits**, while double variables have a precision of about **15 digits**. 
     * Therefore it is safer to use double for most calculations.
    */

    // boolean	-> 1 byte	-> Stores true or false values
    // char	-> 1 byte	-> Stores a single character/letter/number, or ASCII values
    // int	-> 2 or 4 bytes	-> Stores whole numbers, without decimals
    // float	-> 4 bytes	-> Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
    // double	-> 8 bytes	-> Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

    return 0;
}