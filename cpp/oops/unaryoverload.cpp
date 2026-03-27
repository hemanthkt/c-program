#include <iostream>
using namespace std;

class Operator
{
    int n1;
    int n2;
    Operator(int n1 = 0, int n2 = 0) : n1(n1), n2(n2)
    {
    }
    void display()
    {
    }
    void operator-()
    {
        n1 = n1 * -1;
        n2 = n2 * -1;
    }
};

int main()
{
}