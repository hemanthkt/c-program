#include <iostream>
using namespace std;
class Polygon
{
protected:
    int width, height;

public:
    void setvalues(int a, int b)
    {
        width = a;
        heigth = b;
    }
};

class Rectangle : public Polygon
{
public:
    int area()
    {
        return height * width;
    }
}
