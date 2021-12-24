#include <iostream>
#include <math.h>
using namespace std;

class A
{
protected:
    int a;

public:
    void get_a(int n)
    {
        a = n;
    }
};
class B
{
protected:
    int b;

public:
    void get_b(int n)
    {
        b = n;
    }
};
class GCD : public A, public B
{
    int gcd;

public:
    void cal()
    {
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        for (int i = 1; i < b; i++)
        {
            if (a % i == 0 && b % i == 0)
                gcd = i;
        }
    }
    void display()
    {
        cout << "GCD of " << a << ", " << b << " is " << gcd << endl;
    }
};

int main()
{
    GCD var;
    var.get_a(50);
    var.get_b(19);
    var.cal();
    var.display();
}