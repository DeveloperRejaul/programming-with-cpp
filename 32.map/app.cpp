#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    // Create a map called ages that will store integers as values and strings as keys
    map<string, int> ages = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    // **Add Elements **
    ages["David"] = 40;
    ages.insert({"Jenny", 22});

    // **Remove Elements **
    ages.erase("Charlie");


    // **Change Elements **
    ages["Alice"] = 28;
    ages.at("Bob") = 50;


    // access element with key
    cout << "Alice's age: " << ages["Alice"] << endl;
    cout << "Bob's age: " << ages.at("Bob") << endl;


    // **Loop Through a Map**
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    for (auto person : people) {
        cout << person.first << " is: " << person.second << "\n";
    }


    // **Remove all elements**
    ages.clear();
    cout << "Is the map empty? " << ages.empty() << endl;
    return 0;
}
