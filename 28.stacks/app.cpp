#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> myStack;

    // ** Push elements onto the stack **
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    cout << "Top element: " << myStack.top() << endl;

    // ** Pop an element from the stack **
    myStack.pop();
    cout << "Top element after pop: " << myStack.top() << endl;

    return 0;
}
