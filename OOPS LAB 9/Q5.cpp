// 5) Write a program to demonstrate the order of call of constructors and destructors in case of multiple inheritance where one or more base classes are virtual.
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "B" << endl;
    }
};

class C : public A, public B
{
public:
    C()
    {
        cout << "C" << endl;
    }
};

int main()
{
    C c;
    return 0;
}