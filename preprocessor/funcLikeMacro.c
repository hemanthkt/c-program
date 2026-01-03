// function like macro

#if 1
#define MUL(x, y) (x * y)
#define SQUARE(x) (x * x)
#define MAX(x, y) x > y ? x : y
#define MIN(x, y) x < y ? x : y
#define ADD(x, y) (x + y)

int main()
{
    int a = 15, b = 25;

    printf("Mul is %d\n", MUL(10, 20));
    printf("MAX is %d\n", MAX(a, b));
    printf("MIN is %d\n", MIN(a, b));
    printf("Square is %d\n", SQUARE(a));
    printf("SUm is %d\n", 2 * ADD(a, b));
    printf("SUm is %d\n", ADD(a, b));
}