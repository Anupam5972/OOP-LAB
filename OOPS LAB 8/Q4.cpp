#include <iostream>

using namespace std;

class A
{
protected:
    int x;

public:
    void getdata()
    {
        cout << "\n Enter value of x:";
        cin >> x;
    }
};
class B : public A
{
protected:
    int y;

public:
    void get_data()
    {
        cout << "\n Enter value of y:";
        cin >> y;
    }
};
class C : public B
{
public:
    void calculate()
    {
        if (x > y)
            cout << " X is greater";
        else
            cout << " Y is greater";
    }
};

int main()
{
    C obj;
    obj.getdata();
    obj.get_data();
    obj.calculate();
    return 0;
}