//Wap to add two no by using two reference variable.
#include <iostream>
using namespace std;
int addTwoNumbers(int *, int *);

int main()
{
    int fno, sno, sum;

    cout << "\n\n Add two numbers using call by reference:\n";
    cout << "---------------------------------------------\n";

    cout << " Input the first number : ";
    cin >> fno;
    cout << " Input the second  number : ";
    cin >> sno;
   sum = addTwoNumbers(&fno, &sno);
   cout<<" The sum of "<< fno <<" and "<< sno <<"  is "<< sum <<"\n\n";
   return 0;
}
int addTwoNumbers(int *n1, int *n2)
{
    int sum;
    sum = *n1 + *n2;
    return sum;
}