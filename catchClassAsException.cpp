#include <iostream>
using namespace std;

class MyException {
public:
    const char* message;
    MyException(const char* msg) : message(msg) {}
};

void test(int x) {
    try {
        if (x == 0) throw MyException("x is zero");
        if (x < 0) throw MyException("x is negative");
    }
    catch (MyException& e) {
        cout << "Caught exception: " << e.message << endl;
    }
}

int main() {
    test(0);
    test(-1);
    test(1);
    return 0;
}
