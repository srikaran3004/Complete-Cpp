#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number()
    {
        cout << "Roll No: " << roll_number << "\n";
    }
};
class test : public Student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks()
    {
        cout << "\n"
             << "Part1=" << part1 << "\n"
             << "part2=" << part2 << "\n";
    }
};
class sports
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score()
    {
        cout << "Sports wt:" << score << "\n\n";
    }
};
class result : public test, public sports
{
    float total;

public:
    void display();
};