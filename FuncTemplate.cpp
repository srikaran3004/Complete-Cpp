// #include <iostream>
// using namespace std;

// template <class T1, class T2>
// void print(T1 a, T2 b) {
//     cout << a << " " << b << endl;
// }

// int main() {
//     print(1, 2.5);
//     print("Hello", '!');
//     return 0;
// }

#include <iostream>
using namespace std;

template <class T1, class T2>
T1 multiply(T1 num1, T2 num2) {
    return num1 * num2;
}

int main() {
    int num1 = 5;
    double num2 = 3.5;
    cout << "Product = " << multiply(num1, num2) << endl;
    return 0;
}
