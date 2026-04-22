#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{


    // ** Algorithms **
    vector<int> numbers = {5, 2, 9, 1, 5, 6};
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};


    // ** Sort the vector in ascending order **
    sort(numbers.begin(), numbers.end());
    cout << "Sorted numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // ** Sort the vector in descending order **
    sort(cars.begin(), cars.end());
    cout << "Sorted cars in descending order: ";
    for (const string& car : cars) {
        cout << car << " ";
    }
    cout << endl;


    /* code */
    return 0;
}
