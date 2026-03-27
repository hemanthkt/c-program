#include <iostream>
using namespace std;

int main()
{
    int var;
    float f;
    char c;
    string str;
    cout << "Enter integer value:";
    cin >> var;

    cout << "Enter float value: ";
    cin >> f;

    cout << "Enter char value: ";
    cin >> c;

    cout << "Enter string value: ";
    cin >> str;

    cout << "value is var: " << var << endl;
    cout << "value are: " << f << endl
         << c << endl
         << str << endl;

    cout << "Hello world\n";
    return 0;
}