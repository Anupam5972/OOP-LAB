//Wap to add two no by using call by value, call by reference and call by address.

#include <iostream>
using namespace std;

void Add(int a, int b)
{
    cout << endl;
}
void Addref(int &c, int &d)
{
   cout << endl;
}
void AddAdd(int *m, int *n)
{
    cout <<endl ;
}
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    int f = 60;
    cout << "Before Adding the values in main a = " << a << " b = " << b << endl;
    cout << "Before Adding the values in main a = " << c << " b = " << d << endl;
    cout << "Before Adding the values in main a = " << e << " b = " << f << endl;
    cout << "-----------------Call by Value-------------------" << endl;
    Add(a, b);
    cout << "After Adding values in main a + b = " << a + b << endl;
    cout << "----------------Call by refrence------------------" << endl;
    Addref(c, d);
    cout << "After Adding values in main c + d = " << c + d << endl;
    cout << "-----------------Call by Address------------------" << endl;
    AddAdd(&e, &f);
    cout << "After Adding values in main e + f = " << e + f << endl;
}
