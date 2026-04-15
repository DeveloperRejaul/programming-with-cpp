#include <iostream>
using namespace std;

// **creating a function**
void myFn () {
   cout << "my function call" << endl;
}

// **Function with Parameters**
void myFn2 (string name) {
    cout << "My name is" << name << endl;
}


// **function with return value**
int plusFn(int num1, int num2) {
    return num1+num2;
}

// ** Pass By Reference **
void changeValue(int &num) {
  num = 50;
}

int main(int argc, char const *argv[])
{

    // call function
    myFn();
    myFn();
    myFn();

    // call function with paramiter
    myFn2("Rezaul karim");
    myFn2("Rezaul karim");
    myFn2("Rezaul karim");

    // call return value function 
    cout << plusFn(2,4)  << endl;
    cout << plusFn(2,4)  << endl;
    cout << plusFn(2,4)  << endl;

    // change value of variable
    int value = 10;
    changeValue(value);  // Call the function and change the value to 50
    cout << value << endl; 


    // Lambda Functions
    // Syntax: **[capture] (parameters) { code };**
    auto message = []() {
        cout << "Hello World!\n";
    };
    auto add = [](int a, int b) {
        return a + b;
    };

    message();
    cout << add(3, 4);


    return 0;
}
