#include<iostream>
using namespace std;
class invert_position
{
	int x,y,z;
	public:
		invert_position(int a,int b)
		{
			x=a;
			y=b;
		}
		void show()
		{
			cout<<"\nx="<<x;
			cout<<"\ny="<<y;
		}
		friend void operator-(invert_position);
};
void operator-(invert_position i)
{
	i.x=-i.x;
	i.y=-i.y;
}
int main(){
	invert_position i(2,3);
	-i;
	i.show();
	return 0;
}
