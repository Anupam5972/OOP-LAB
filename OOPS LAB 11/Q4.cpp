// Write a program to overload unary(++) operator and unary (--) operator using friend function.
#include <iostream>
using namespace std;

class opr
{
    int x, y;

public:
    void input()
    {
        cout << "Enter the values of x and y : ";
        cin >> x >> y;
    }

    friend void operator--(opr &o);
    friend void operator++(opr &o);

    void display()
    {
        cout << "\n x : " << x;
        cout << "\n y : " << y;
    }
};
void operator--(opr &o)
{
    o.x--;
    o.y--;
}
void operator++(opr &o)
{
    o.x++;
    o.y++;
}

int main()
{
    opr obj;
    obj.input();

    --obj;
    cout << "\n After Decrementing : ";
    obj.display();

    ++obj;
    ++obj;
    cout << "\n After Incrementing : ";
    obj.display();

    return 0;
}