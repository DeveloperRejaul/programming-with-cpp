#include <iostream>
using namespace std;

int main(){
    // **define string variable**
    string name = "John Doe";
    cout << "Name: " << name << endl; // Output: Name: John Doe

    //**Concatenation**
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << endl; // Output: Full Name: John Doe


    // **appending to a string**
    string greeting = "Hello ";
    greeting.append("World");

    cout << greeting << endl; // Output: Greeting: Hello, World


    // **Numbers and Strings and concatenation**
    string x = "10";
    int y = 20;
    string z = x + to_string(y);
    cout << "Concatenated string: " << z << endl; // Output: Concatenated string: 1020

    // String Length
    cout << "Length of string: " << z.length() << endl; // Output: Length of string: 4
    cout << "Length of string: " << z.size() << endl; // Output: Length of string: 4

    // **Access Strings**
    string str = "Hello, World!";
    cout << "First character: " << str[0] << endl; // Output: First character: H
    cout << "Last character: " << str[str.length() - 1] << endl; // Output: Last character: !


    // **Special Characters**
    // \'	'	Single quote
    // \"	"	Double quote
    // \\	\	Backslash
    string txt1 = "We are the so-called \"Vikings\" from the north.";
    cout << txt1 << endl; // Output: We are the so-called "Vikings" from the north.

    string txt2 = "It\'s alright.";
    cout << txt2 << endl; // Output: It's alright.

    string txt3 = "The character \\ is called backslash.";
    cout << txt3 << endl; // Output: The character \ is called backslash.

    //**User Input**
    // string firstName2;
    // cout << "Type your first name: ";
    // getline (cin, firstName2); // get user input from the keyboard
    // cout << "Your name is: " << firstName2;

    // **C-Style Strings**
    string greeting3 = "Hello";  // Regular String
    char greeting4[] = "Hello";  // C-Style String (an array of characters)

    cout << "Regular String: " << greeting3 << endl; // Output: Regular String: Hello
    cout << "C-Style String: " << greeting4 << endl; // Output: C-Style String: Hello
    return 0;
}
