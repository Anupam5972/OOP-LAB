#include <iostream>
#include <math.h>
using namespace std;

class Number
{
protected:
    int a;

public:
    void get_data(int n)
    {
        a = n;
    }
};
class Prime : public Number
{
public:
    void isPrime()
    {
        int i, flag = 1, squareRoot;
        squareRoot = sqrt(a);
        for (i = 2; i <= squareRoot; ++i)
        {
            if (a % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << a << " is a Prime number." << endl;
        }
        else
        {
            cout << a << " is not a Prime number." << endl;
        }
    }
};
class Armstrong : public Number
{
public:
    void isArmstrong()
    {
        int lastDigit, sum, originalNum, digits;
        sum = 0;
        originalNum = a;
        digits = (int)log10(a) + 1;
        while (a > 0)
        {
            lastDigit = a % 10;
            sum = sum + round(pow(lastDigit, digits));
            a = a / 10;
        }
        if (originalNum == sum)
        {
            cout << originalNum << " is a Armstrong numeber." << endl;
        }
        else
        {
            cout << originalNum << " is not a Armstrong numeber." << endl;
        }
    }
};

int main()
{
    int x, y;
    Prime p;
    cout << "Enter values ";
    cin >> x >> y;
    p.get_data(x);
    p.isPrime();

    Armstrong a;
    a.get_data(y);
    a.isArmstrong();
    return 0;
}
// 1. Wap to create Base class Number.And make two derived class Prime &Armstrong.And display whether a number entered is prime or not and armstrong or not by declaring appropriate function.
// 2. Wap to create 2 base class A &B.having respective data member x, y.And create derived class GCD from A &B and display GCD of x and y using appropriate function.
// 3. Wap to create two base class named Rectange &Triange class.And common function getdata(), area().And another class Area derived from Rectange and Triangle with No member function.Display the area of Rectangle and Triangle.
// 4. Wap to create Base class A and data member is x.And B class derived from A having data member y.And C class derived from B will check greatest no between them using appropriate function.
// 5. Wap to create father class having data member name and age.Another class son derived from father also having same data member.Grandson derived from son also having same data member.And common getdata putdata function.Display details of father, son and grandson.
// 6. Wap to create Student class.Data member name, roll.And Academic class derived from student and data member a1, a2 mark.And sport class derived from Student and data member is s1, s2 mark.And Result class derived from Academic &Sport, which will display roll, name, a1, a2 mark and s1, s2 mark along with display total mark using appropriate mark.