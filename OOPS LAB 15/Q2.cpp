// Wap to add two no of same type by using template
#include <iostream>
using namespace std;
template <class t1>
void sum(t1 a, t1 b)
{
    cout << "\nSum = " << a + b << endl;
}

int main()
{
    int a, b;
    cout << "\nEnter two integer data: ";
    cin >> a >> b;
    sum(a, b);
    return 0;
}