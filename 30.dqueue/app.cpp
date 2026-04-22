#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> myDeque;

    // ** Push elements onto the deque **
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_back(3);

    cout << "Front element: " << myDeque.front() << endl;
    cout << "Back element: " << myDeque.back() << endl;

    // ** Pop an element from the deque **
    myDeque.pop_back();
    cout << "Back element after pop: " << myDeque.back() << endl;


    // ** access elemnt with index **
    cout << "Element at index 0: " << myDeque[0] << endl;
    cout << "Element at index 1: " << myDeque.at(1)<< endl;

    // change element with index
    myDeque[0] = 10;
    cout << "Element at index 0 after change: " << myDeque[0] << endl;

    return 0;
}
