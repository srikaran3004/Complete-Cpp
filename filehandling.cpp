// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     float height[4] = {17.5, 15.0, 3.8, 5.0};
//     ofstream outfile;
//     outfile.open("abc", ios::binary); // Specify binary mode for writing
//     outfile.write((char*)height, sizeof(height));
//     outfile.close();

//     float p[4];
//     ifstream infile;
//     infile.open("abc", ios::binary); // Specify binary mode for reading
//     infile.read((char*)p, sizeof(p));
//     infile.close();

//     cout << p[0] << " " << p[1] << " " << p[2] << " " << p[3] << endl;
//     return 0;
// }



#include <iostream>
#include <cstring> // Include the header for string manipulation
using namespace std;

class StudentExample {
private:
    char name[30];
    int roll_no;
    float marks;

public:
    void getdata() {
        cout << "Enter name: ";
        cin.ignore(); // Ignore any newline characters left in the input buffer
        cin.getline(name, sizeof(name)); // Use getline to input the name
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    StudentExample student;
    student.getdata();
    student.putdata();

    return 0;
}
