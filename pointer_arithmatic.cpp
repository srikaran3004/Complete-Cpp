#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    int *p;
    p = arr;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
}
