#include <iostream>

class Operator
{
    void operator-()
    {
        n1 = n1 * -1;
        n2 = n2 * -1;
    }

    Operator operator+(Operator c)
    {
        Operator temp;
    }
}