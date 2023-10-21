#include<iostream>
using namespace std;

class sum
{
public:
    int b, a;
    sum()
    {
        b = 50;
    }
    void set_data()
    {
        cout << "enter a: ";
        cin >> a;
    }
    int operator+(const sum& s1) // Changed parameter to const reference
    {
        return (a + s1.b);
    }
};

int main()
{
    int d;
    sum s, t;
    s.set_data();
    d = s + t; // Use the overloaded + operator
    cout << "Sum is: " << d;
    // getch(); // Remove this line as it's not standard C++, and it's not needed for this program
    return 0; // Add a return statement to indicate successful program execution
}
