// // CPP program to dereference the void
// // pointer to access the value

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     void *ptr = &a;
//     // The void pointer 'ptr' is cast to an integer pointer
//     // using '(int*)ptr' Then, the value is dereferenced
//     // with `*(int*)ptr` to get the value at that memory
//     // location
//     cout << *(int *)ptr << endl;

//     return 0;
// }

#include <iostream>

int main()
{
    int i = 10;
    float f = 3.14;
    char c = 'a';
    void *ptr;

    ptr = &i;
    std::cout << "Value of i: " << *(int *)ptr << std::endl;

    ptr = &f;
    std::cout << "Value of f: " << *(float *)ptr << std::endl;

    ptr = &c;
    std::cout << "Value of c: " << *(char *)ptr << std::endl;

    return 0;
}
