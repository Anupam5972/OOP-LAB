// (Pointers to derived classes) Write a program to illustrate how pointers to a base class is used for both base and derived class.
#include <iostream>
using namespace std;
class base
{
public:
    int n1;
    void show()
    {
        cout << "\nn1 = " << n1;
    }
};
class derive : public base
{
public:
    int n2;
    void show()
    {
        cout << "\nn1 = " << n1;
        cout << "\nn2 = " << n2;
    }
};
int main()
{
    base b;
    base *bptr;
    cout << "Pointer of base class points to it \n";
    bptr = &b;
    bptr->n1 = 50;
    cout << "Access base class via base pointer";
    bptr->show();
    derive d;
    cout << "\n";
    bptr = &d;
    bptr->n1 = 70;
    cout << "Access derive class via base pointer";
    bptr->show();
    return 0;
}