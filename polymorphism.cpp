#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Employee
{
    int id;
    float salary;
    public:
        void input()
        {
            cout<<"Enter id:";
            cin>>id;
            cout<<"Enter salary: ";
            cin>>salary;
        }
        void display()
        {
            cout<<"Employee id: "<<id<<", Salary: "<<salary<<endl;
        }
};
int main()
{
    int n;
    cout<<"\nEnter number of employees: ";
    cin>>n;
    Employee *p=new Employee[n];
    for(int i=0;i<n;i++)
    {
        (p+i)->input();
    }
    cout<<"\nEmployee details:\n";
    for(int i=0;i<n;i++)
    {
        (p+i)->display();
    }
    
    delete[]p;
    return 0;
}
