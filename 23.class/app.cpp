#include <iostream>
using namespace std;


// ** Create a Class **
class MyClass {           // The class
    public:               // Access specifier
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)
        string name;
        int age;
        // **Constructor**
        MyClass(string _name, int _age) {
            name = _name;
            age = _age;
        }
        // **class method**
        void myMethod() {  // Method/function defined inside the class
            cout << "Hello World!" << endl;
        }
};

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}


// ** Friend Functions **
class Employee {
  private:
    int salary;

  public:
    Employee(int s) {
      salary = s;
    }

    // Declare friend function
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
  cout << "Salary: " << emp.salary << endl;
}




// ** Inheritance **
// Base class
class MyInheritanceClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." << endl;
    }
};

// Another base class
class MyInheritanceOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." << endl;
    }
};

// Derived class
class MyInheritanceChildClass: public MyInheritanceClass, public MyInheritanceOtherClass {
};


// **template** this is like typescript Generic type
template <typename T>
T add (T a, T b) {
    return a + b;
} 

template <typename T1, typename T2 >
class TemplateClass {
    public:
    T1 value;
    TemplateClass(T1 a, T2 b) {
      value = a + b;
    }
    void show() {
      cout << "Value: " << value << "\n";
    }
};


int main(int argc, char const *argv[])
{
    /**  Classes and Objects **/
    MyClass myObj("Rezaul karim", 26);  // Create an object of MyClass
    
    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString << endl;

    // call Class Methods
    myObj.myMethod();

    // Constructor value access
    cout << myObj.name << endl;
    cout << myObj.age << endl;


    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";


    // call Friend function
    Employee myEmp(50000);
    displaySalary(myEmp);

    // call Inheritance class
    MyInheritanceChildClass myInheritanceChildClass;
    myInheritanceChildClass.myFunction();
    myInheritanceChildClass.myOtherFunction();

    // call template function 
    cout << add<int>(5, 3) << "\n";
    cout << add<double>(2.5, 1.5) << "\n";

    // call template class
    TemplateClass<int, int> cl(2, 3);
    cl.show();

    return 0;
}
