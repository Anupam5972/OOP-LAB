// (Virtual Function) Define a class ABC. Derive two classes BBC and KBC from ABC. All the classes contains same member function name as display(). The base class pointer always holds the derived class objects.
// a) Write a program such that base class pointer or reference will always access/call the base version of the members available in derived class, do not have any access to the derived class members.
// b) Write a program such that base class pointer or reference will always access/call the derived version of the members available in derived class, do not have any access to the base class members.
// Write down the concepts used for bit a) and b) separately.
#include <iostream>
using namespace std;

class ABC
{
public:
    virtual void display()
    {
        cout << "\n In Base Class ABC\n";
    }
};
class BBC : public ABC
{
public:
    void display()
    {
        cout << "In Derived Class BBC\n";
    }
};
class KBC : public ABC
{
public:
    void display()
    {
        cout << "In Derived Class KBC\n";
    }
};
int main()
{
    BBC d1;
    KBC d2;
    ABC *bptr = &d1;
    bptr->display();
    bptr = &d2;
    bptr->display();
    return 0;
}