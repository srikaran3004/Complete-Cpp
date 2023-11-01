#include<iostream>
using namespace std;
class bc{
	public:
		void printbc(){
			cout<<"\nprinting message in base class"<<endl;
		}
		void show(){
			cout<<"\n show() of base class"<<endl;
		}
};
class dc:public bc{
	public:
		void printdc(){
			cout<<"\n printing message in derived class"<<endl;
		}
		void show(){
			cout<<"\n show() of derived class"<<endl;
		}
};

int main()
{
    bc *bptr;
    bc base;
    bptr=&base;
    cout<<"bptr points to base objects\n";
    bptr->show();
    dc derived;
    bptr=&derived;
    cout<<"bptr now points to derived objects\n";
    bptr->show();
    dc *dptr;
    dptr=&derived;
    cout<<"dptr is derived type pointer\n";
    dptr->show();
    dptr->printdc();
    cout<<"using((dc*)bptr)\n";
    ((dc*)bptr)->show();
    ((dc*)bptr)->printdc();
    return 0;
}
