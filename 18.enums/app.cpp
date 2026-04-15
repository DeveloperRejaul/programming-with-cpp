#include <iostream>;
using namespace std;



enum Level {
  LOW= 20,
  MEDIUM = 30,
  HIGH=50
};


int main(int argc, char const *argv[])
{
    /* code */
    enum Level myvar = LOW;

    // Print the enum variable
    cout << myvar << endl; // print 20
    cout << Level::MEDIUM; // print 30

    return 0;
}
