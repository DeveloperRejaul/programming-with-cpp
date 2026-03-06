#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    // froetch loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << "\n";
    }

    //Loop Through a String
    string word = "Hello";
    for (char c : word) {
        cout << c << "\n";
    }

    return 0;
}
