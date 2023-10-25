#include <iostream>
using namespace std;

class one
{
protected:
    int x, y;

public:
    void in()
    {
        cout << "Enter the data: ";
        cin >> x >> y;
    }
};

class two : public one
{
    int z;

public:
    void take()
    {
        cout << "Enter z: ";
        cin >> z;
    }

    void dis()
    {
        cout << "Sum of x, y, and z: " << x + y + z << endl;
    }
};

int main()
{
    two t1;
    t1.in();
    t1.take();
    t1.dis();
    return 0;
}
