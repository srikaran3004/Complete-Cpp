#include<iostream>
using namespace std;
class BC {
	public:
		virtual void show()
		{
			cout<<"\nshow () of base class"<<endl;
		}
};
class DC:public BC{
	public:
		void show(){
			cout<<"\nshow()of derived class"<<endl;
		}
};
int main(){
	BC *bptr;
	BC base;
	bptr=&base;
	cout<<"\n---runtime polymorphism";
	cout<<"bptr points to base objects";
	bptr->show();
	DC derived;
	bptr=&derived;
	cout<<"bptr now points derived ";
	bptr->show();
	return 0;

}