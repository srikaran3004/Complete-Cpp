// C++ program to demonstrate the execution of constructor
// and destructor when multiple objects are created

#include <iostream>
using namespace std;
class Test {
public:
	// User-Defined Constructor
	Test() { cout << "\n Constructor executed"; }

	// User-Defined Destructor
	~Test() { cout << "\n Destructor executed"; }
};

main()
{
	// Create multiple objects of the Test class
	Test t, t1, t2, t3;
	return 0;
}


// C++ program to demonstrate the number of times
// constructor and destructors are called

#include <iostream>
using namespace std;
static int Count = 0;	 //It is static so that every class object has the same value
class Test {
public:
	// User-Defined Constructor
	Test()
	{

		// Number of times constructor is called
		Count++;
		cout << "No. of Object created: " << Count
			<< endl;
	}

	// User-Defined Destructor
	~Test()
	{
		
		cout << "No. of Object destroyed: " << Count //It will print count in
			<< endl;								 //decending order
		Count--;
		// Number of times destructor is called
	}
};

// driver code
int main()
{
	Test t, t1, t2, t3;

	return 0;
}
