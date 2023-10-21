#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called" << endl;
    }

    void PrintMessage() {
        cout << "Hello, I'm an object of MyClass!" << endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj; // Constructor is automatically called here

    // Calling a member function of the object
    obj.PrintMessage();

    return 0;
}



#include <iostream>
using namespace std;

class MyClass {
public:
    void Initialize() {
        cout << "Initialization method called" << endl;
    }

    void PrintMessage() {
        cout << "Hello, I'm an object of MyClass!" << endl;
    }
};

int main() {
    MyClass obj;

    // Initialize the object using a member function
    obj.Initialize();

    // Calling a member function of the object
    obj.PrintMessage();

    return 0;
}


// In these both we can observe the difference in the class part where if it is done using constructor we dont need to initialize the member function .