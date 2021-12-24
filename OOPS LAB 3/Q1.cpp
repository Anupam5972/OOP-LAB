// Wap to find all armstrong no from 100 to 999 by using function

#include <iostream>
using namespace std;

int main(void)
{
    int i = 100, rmdr, sum, temp, tnum;

    cout << "The 3-digit Armstrong numbers are : ";

    for (i = 100; i <= 999; i++)
    {
        tnum = i;
        sum = 0;
        while (tnum > 0)
        {
            rmdr = tnum % 10;
            temp = rmdr * rmdr * rmdr;
            sum = temp + sum;
            tnum = tnum / 10;
        }
        if (i == sum)
            cout << sum << endl;
    }
}
