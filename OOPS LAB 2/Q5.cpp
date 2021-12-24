//Q5. Wap to check no is armstrong or not of 3 digits no in C++.

#include <iostream>
using namespace std;

int main()
{
    int num, oNum, Rmndr, res = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    oNum = num;

    while (oNum != 0)
    {
        Rmndr = oNum % 10;
        res += Rmndr * Rmndr * Rmndr;
        oNum /= 10;
    }
    if (res == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}