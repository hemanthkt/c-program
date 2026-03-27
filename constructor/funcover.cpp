#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    Student()
    {
        cout << "default constructor calledn\n";
        id = 10;
        name = "abc";
    }

    Student(int sid, string name)
    {
        cout << "parametarized constructor called\n";
        id = sid;
        name = sname;
    }

    Student(int sid)
    {
        cout << "constructor called with one args\n";
        id = sid;
    }

    void print_data()
    {
        cout << "\nid" << id << "\nname" << name;
    }
}