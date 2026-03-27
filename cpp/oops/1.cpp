#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    string address;

    void get_id(void)
    {
        cout << "Enter ID No: ";
        cin >> id;
    }
    void get_name(void)
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void get_address(void)
    {
        cout << "Enter address: ";
        cin >> address;
    }
}
