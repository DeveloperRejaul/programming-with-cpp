#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> myQueue;

    // ** Push elements onto the queue **
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "Front element: " << myQueue.front() << endl;
    cout << "Back element: " << myQueue.back() << endl;

    // ** Pop an element from the queue **
    myQueue.pop();
    cout << "Front element after pop: " << myQueue.front() << endl;

    return 0;
}