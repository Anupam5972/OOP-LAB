// Wap to create template class which will add two different types of no and display it.
#include <iostream>
using namespace std;
template <class T1, class T2 = int>
class Sum
{
    T1 x;
    T2 y;
public:
    void input()
    {
        cout << "\n Enter two numbers: ";
        cin >> x >> y;
    }
    void addition();
};
template <class T1, class T2>
void Sum<T1, T2>::addition()
{
    int z;
    z = x + y;
    cout << "\n Addition :" << z;
}
int main()
{
    Sum<int, int> X;
    X.input();
    X.addition();
    return 0;
}