#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    int roll_no;

protected:
    char section[10];

public:
    void get_rno()
    {
        cout << "\nEnter the Roll No: ";
        cin >> roll_no;
    }
    void show_rno()
    {
        cout << "\nRoll No: " << roll_no;
    }
};
class result : private student
{
private:
    float fees;

public:
    void get_data()
    {
        get_rno();
        cout << "\nEnter fess: ";
        cin >> fees;
        cout << "\nEnter section: ";
        cin >> section;
    }
    void display()
    {
        show_rno();
        cout << "\n Fees: " << fees;
        cout << "\n Section: " << section;
    }
};
int main()
{
    result obj1;
    obj1.get_data();
    obj1.display();
}

// The following are never inherited:
// constructors
// destructors
// friend function
// overloaded new operators
// overloaded = operators
// Class frienship is not inherited.