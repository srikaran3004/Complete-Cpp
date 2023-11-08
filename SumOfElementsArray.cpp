#include<iostream>
using namespace std;

int main(){
    int size;
    int sum=0;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            break;
        }
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}