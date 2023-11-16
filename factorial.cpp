// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n==0||n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fact(n-1);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the Number: ";
//     cin>>n;
//     cout<<"Factorial of "<<n<<" is : "<<fact(n)<<endl;
// }


#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter no of elements in array: "<<endl;
    cin>>size;
    int arr[size];
    long long factorial=1;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=1;j<arr[i];j++){
            factorial*=j;
        }
        cout<<"Factorial of "<<arr[i]<< "is"<<factorial<<endl;
    }
    return 0;
}