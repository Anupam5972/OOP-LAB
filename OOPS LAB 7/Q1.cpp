// Wap to create a class named A and accept two no by using getdata() and Create a class B
// derived from A which will display that two no by using putdata().
#include <iostream>
using namespace std;
class A
{
private:
    int a;
    int b;

public:
    void getdata(void);
    void putdata(void);
};
void A::getdata(void)
{
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}
void A::putdata(void)
{
    cout << "a= " << a << ",b= " << b << endl;
}
class B : public A
{
public:
    B()
    {
        cout << "Class B is called" << endl;
    }
};
int main()
{
    B num;
    num.getdata();
    num.putdata();
    return 0;
}