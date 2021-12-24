//Wap to swap 2 no by using call by value, call by address and call by reference.

#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapref(int &c, int &d)
{
    int temp;
    temp = c;
    c = d;
    d = temp;
}
void swapAdd(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    int f = 60;
    cout << "Before swapping the values in main a = " << a << " b = " << b << endl;
    cout << "Before swapping the values in main a = " << c << " b = " << d << endl;
    cout << "Before swapping the values in main a = " << e << " b = " << f << endl;
    cout << "-----------------Call by Value-------------------" << endl;
    swap(a, b);
    cout << "After swapping values in main a = " << a << " b = " << b << endl;
    cout << "----------------Call by refrence------------------" << endl;
    swapref(c, d);
    cout << "After swapping values in main a = " << c << " b = " << d << endl;
    cout << "-----------------Call by Address------------------" << endl;
    swapAdd(&e, &f);
    cout << "After swapping values in main a = " << e << " b = " << f << endl;
}
