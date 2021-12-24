// Wap to add two different types of number by using template.
#include <iostream>
using namespace std;
template <class t1, class t2>
void sum(t1 a, t2 b)
{
    cout << "\nSum = " << a + b << endl;
}

int main()
{
    int a, b;
    float x, y;
    cout << "\nEnter integer data: ";
    cin >> a;
    cout << "\nEnter float data: ";
    cin >> x;
    sum(a, x);
    return 0;
}