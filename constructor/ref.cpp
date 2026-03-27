#include <iostream>
using namespace std;

void v_swap(int a, int b) // pass by value
{
    int temp = a;
    a = b;
    b = temp;
}

void a_swap(int *a, int *b) // pass by address
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void r_swap(int &a, int &b) // pass by reference
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cin >> x >> y;

    v_swap(x, y);
    cout << "x =" << x << "y=" << y << "\n";

    a_swap(&x, &y);
    cout << "x =" << x << "y=" << y << "\n";
    r_swap(x, y);
    cout << "x =" << x << "y=" << y << "\n";
}
