#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; //By using here * for one time here the value of b will be the output
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; //When we use it here for two times then we get the value of dereferencing the double times of value of b.
    
    return 0;
}