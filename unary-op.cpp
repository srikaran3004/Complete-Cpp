#include<iostream>
using namespace std;

class point
{
    int x, y;
public:
    point()
    {
        x = 0; y = 0;
    }

    point(int i, int j)
    {
        x = i; y = j;
    }

    point operator-();  // Declare the operator-() function

    void display()
    {
        cout << x << "\t" << y;
    }
};

// Define the operator-() function
point point::operator-()
{
    point temp;  // Create a temporary point object

    temp.x = -x;  // Negate the x-coordinate
    temp.y = -y;  // Negate the y-coordinate

    return temp;  // Return the temporary point
}

int main()
{
    point o1(10, 10);
    o1 = -o1;  // Use the unary minus operator
    o1.display();

    return 0;
}
