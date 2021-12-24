// Wap to create Hierarchical Structure. Number class is base data member int X and two derived class Perfect & Strong.
//  It will check corresponding whether no is perfect or Strong. But thing is one input will taken and that single input will check both.

#include <iostream>
using namespace std;
class Number
{
protected:
    int x;

public:
    void getdata()
    {
        cout << "\n Enter a Number:";
        cin >> x;
    }
};
class Perfect : public Number
{
public:
    void check_perfect()
    {
        int i, div, sum = 0;
        getdata();
        for (i = 1; i < x; i++)
        {
            div = x % i;
            if (div == 0)
                sum = sum + i;
        }
        if (sum == x)
            cout << "\n " << x << " is a perfect number.";
        else
            cout << "\n " << x << " is not a perfect number.";
    }
};
class Strong : public Number
{
public:
    void check_strong()
    {
        getdata();
        int temp = x;
        int i, sum = 0;
        while (x)
        {
            int num = x % 10;
            int fact = 1;
            for (i = num; i > 0; i--)
            {
                fact = fact * i;
            }
            sum += fact;
            x /= 10;
        }
        if (sum == temp)
        {
            cout << temp << " is a Strong Number";
        }
        else
        {
            cout << temp << " is not a Strong Number";
        }
    }
};
int main()
{
    Perfect obj1;
    Strong obj;
    obj1.check_perfect();
    obj.check_strong();
    return 0;
}