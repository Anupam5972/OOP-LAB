#include <iostream>
using namespace std;
class Shape
{
public:
    double a, b;
    void get_data()
    {
        cin >> a >> b;
    }
    virtual void display_area() = 0;
};

class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of triangle " << 0.5 * a * b << endl;
        cout << "Area of rectangle " << a * b << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display_area() {}
};

int main()
{
    Triangle t;
    Shape *st = &t;
    cout << "Enter base and altitude: ";
    st->get_data();
    st->display_area();

    return 0;
}