// write a program to overload unary(++) operator and unary (--) operator.
#include <iostream>
using namespace std;
class Int
{
private:
    int i;

public:
    Int(int i = 0)
    {
        this->i = i;
    }
    Int operator++()
    {
        Int temp;
        temp.i = ++i;
        return temp;
    }
    Int operator++(int)
    {
        Int temp;
        temp.i = i++;
        return temp;
    }
    Int operator--()
    {
        Int temp;
        temp.i = --i;
        return temp;
    }
    Int operator--(int)
    {
        Int temp;
        temp.i = i--;
        return temp;
    }
    void display()
    {
        cout << "i = " << i << endl;
    }
};
int main()
{
    Int i1(3), i4(3), i5(3), i7(3);
    cout << "Before increment: ";
    i1.display();
    Int i2 = ++i1;
    cout << "After pre increment: ";
    i2.display();
    Int i3 = i4++;
    cout << "After post increment: ";
    i3.display();
    cout << "-------------------------" << endl;
    cout << "Before Decrement: ";
    i1.display();
    Int i6 = --i5;
    cout << "After pre Decrement: ";
    i6.display();
    Int i8 = i7--;
    cout << "After post Decrement: ";
    i8.display();
}
