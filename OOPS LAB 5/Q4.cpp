#include <iostream>
using namespace std;
class A
{
public:
    int x = 10;
    friend class B;
};
class B
{
public:
    int y = 20;
    friend class A;
    int gcd(A &ob)
    {
        int hcf, i;
        for (i = 1; i <= ob.x && i <= y; i++)
        {
            if (ob.x % i == 0 && y % i == 0)
            {
                hcf = i;
            }
        }
        cout << "GCD of 10 & 20 :" << hcf;
    }
};
int main()
{
    A ob1;
    B ob;
    ob.gcd(ob1);
    return 0;
}