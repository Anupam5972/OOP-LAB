#include <iostream>
using namespace std;

void Add(int a, int b)
{
    int sum;
    sum = a + b;
    cout << sum << endl;
    return;
};
void Addref(int &c, int &d)
{
    int sum;
    sum = c + d;
    cout << sum << endl;
    return;
};
void AddAdd(int *m, int *n)
{
    int sum;
    sum = *m + *n;
    cout << sum << endl;
    return;
};
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    int f = 60;
    cout << "Before Adding the values in main a = " << a << " b = " << b << endl;
    cout << "Before Adding the values in main c = " << c << " d = " << d << endl;
    cout << "Before Adding the values in main e = " << e << " f = " << f << endl;
    cout << "-----------------Call by Value-------------------" << endl;
    Add(a, b);

    cout << "----------------Call by refrence------------------" << endl;
    Addref(c, d);

    cout << "-----------------Call by Address------------------" << endl;
    AddAdd(&e, &f);
}