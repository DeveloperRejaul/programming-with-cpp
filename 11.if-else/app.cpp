#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int time = 16;

    if (time < 12) {
    cout << "Good morning." << endl;
    } else if (time < 18) {
    cout << "Good day." << endl;
    } else {
    cout << "Good evening." << endl;
    }
    
    // sort
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << endl;

    cout << ((time < 18) ? "Good day." : "Good evening.") << endl;
    return 0;
}
