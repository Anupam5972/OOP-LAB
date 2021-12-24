// Wap to create Rectange class having data member width & height. And create another
// class Area which will derived from Rectange. And display it's area.
#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
public:
    float breadth;
    void Enter_lb(void)
    {
        cout << "\n Enter the Length of the rectangle : ";
        cin >> length;
        cout << "\n Enter the Breadth of the rectangle : ";
        cin >> breadth;
    }
    float get_l(void)
    {
        return length;
    }
};
class Area : public Rectangle
{
private:
    float area;

public:
    void Rec_area(void)
    {
        area = get_l() * breadth;
    }
    void Display(void)
    {
        cout << "\n Length = " << get_l();
        cout << "\n Width = " << breadth;
        cout << "\n Area = " << area;
    }
};
int main()
{
    Area r1;
    r1.Enter_lb();
    r1.Rec_area();
    r1.Display();
    return 0;
}