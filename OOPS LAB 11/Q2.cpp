// Write a program to overload unary(-) operator using friend function.
#include <iostream>
using namespace std;
class NUM
{
    int a, b, c;

public:
    void getNum()
    {
        cout << "Values of A, B & C\n";
        cout << "a ";
        cin >> a;
        cout << "b ";
        cin >> b;
        cout << "c ";
        cin >> c;
    }
    void dispNum()
    {
        cout << a << "\n"
             << b << "\n"
             << c << "\n"
             << endl;
    }
    void friend operator-(NUM &x);
};
void operator-(NUM &x)
{
    x.a = -x.a;
    x.b = -x.b;
    x.c = -x.c;
}
int main()
{
    NUM x1;
    x1.getNum();
    cout << "Before Overloading\n";
    x1.dispNum();
    cout << "After Overloading \n";
    -x1;
    x1.dispNum();
    return 0;
}