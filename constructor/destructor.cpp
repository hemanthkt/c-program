#include <stdio.h>
#include <string.h>

class Employee
{
public:
    int id;
    char *name;

    Employee(int i, char *s);
    ~Employee();
}

Employee : Employee(int i, char *s)
{
    id = i;
    name = (char *)malloc(sizeof(char) * 10);
    strcpy(name, s);
}

Employee : Employee(void)
{
    free(name);
}

int main()
{
    Employee e1(11, (char *)"Tingu");
    cout << "ID: " << e1.id << endl;
    cout << "Name: " << e1.id << endl;
}