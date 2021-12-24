#include <iostream>
using namespace std;
class A
{
protected:
    int n1, n2, i, GCD;

public:
    void accept()
    {
        cout << "\n Enter First Number : ";
        cin >> n1;
        cout << "\n Enter Second Number : ";
        cin >> n2;
    }
};
class B : public A
{
public:
    void calc()
    {
        for (i = 1; i <= n1 && i <= n2; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
                GCD = i;
        }
    }
    void disp()
    {
        cout << "\nHCF of " << n1 << " and " << n2 << " is " << GCD << endl;
    }
};
int main()
{
    B obj;
    obj.accept();
    obj.calc();
    obj.disp();
}