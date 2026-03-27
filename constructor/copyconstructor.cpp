#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;

    Employee(int sid = 0, string sname = "default" : id(sid).name(sname))
    {
        cout << "constructor called" << endl;
    }
    void display()
    {
        cout << id << " " << name << endl;
    }
    Employee(const Employee &emp)
    {
        cout << "copy constructor called" << endl;
        id = emp.id;
        name = emp.name;
    }
};

int main()
{
    Employee e1, e2(15, (char *)"abcc");
    e1.display();

    Employee e3(e2);

    e3.display();
}