#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(&a, &b);
    cout << a << " " << b; // here  the output will be reflected in actual parameters as well , unlike call by value.
}