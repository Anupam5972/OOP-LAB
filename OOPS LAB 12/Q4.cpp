// 4. Wap to create Shape class.It has two data member function.area() and display().Area is dummy function.And Display only working.And derived another class Circle.Which also two member function area() display1().By using abstract class display area of circle and as well as display function of Base class.
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

class Shape
{
public:
    double r;
    void get_data()
    {
        cin >> r;
    }
    virtual void display_area() = 0;
};

class Circle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Circle " << M_PI * r * r << endl;
    }
};
int main()
{
    Circle t;
    Shape *st = &t;
    cout << "Enter Radius of Circle: ";
    st->get_data();
    st->display_area();
}