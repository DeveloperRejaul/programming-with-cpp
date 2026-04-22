#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{

    // ** List **
    list<int> myList ={1,2,3,4,5};
    for (int num : myList)
    {
        cout << num << endl;
    }
    
    // all method of list 

    list<string> fruits = {"Apple", "Banana", "Cherry"};

    cout << "First fruit: " << fruits.front() << endl; // ** Access the first element **
    cout << "Last fruit: " << fruits.back() << endl;   // ** Access the last element **

    fruits.push_back("Orange"); // **Add an element to the end of the list **
    cout << "Added fruit: " << fruits.back() << endl;

    fruits.push_front("Mango"); //**  Add an element to the front of the list **
    cout << "Added fruit at the front: " << fruits.front() << endl;


    fruits.pop_back(); // **Remove the last element**
    cout << "Removed last fruit: " << fruits.back() << endl;


    fruits.pop_front(); // **Remove the first element**
    cout << "Removed first fruit: " << fruits.front() << endl;

    /* code */
    return 0;
}
