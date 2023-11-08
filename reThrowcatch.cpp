#include <iostream>
using namespace std;

void divide(double x, double y) {
    cout << "Inside Function";
    if (y == 0.0) {
        throw y;
    }
    else {
        cout << "Division=" << x / y;
    }
    cout << "End of function";
}

int main() {
    cout << "Inside main";
    try {
        divide(10.5, 2.0);
        divide(20.0, 0.0);
    }
    catch (double) {
        cout << "Caught double inside main";
    }
    cout << "End of main";
    return 0;
}
