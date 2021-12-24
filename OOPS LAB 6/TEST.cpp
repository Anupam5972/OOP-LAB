#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

class Shape
{
    float ar;

public:
    Shape(float r)
    {
        ar = r * r;
    }
    Shape(float l, float b)
    {
        ar = l * b;
    }
    Shape(float a, float b, float c)
    {
        float s;
        s = (a + b + c) / 2;
        ar = s * (s - a) * (s - b) * (s - c);
        ar = pow(ar, 0.5);
    }
    void display()
    {
        cout << "\n Area : " << ar;
    }
    void displayc()
    {
        cout << "\n Area : " << 3.14*ar;
    }
};
int main()
{
    int ch;
    float x, y, z;
    do
    {
        cout << "\n\n 1. Area of Circle";
        cout << "\n 2. Area of Rectangle";
        cout << "\n 3. Area of Triangle";
        cout << "\n 4. Area of Square";
        cout << "\n 5. Exit";
        cout << "\n\n Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            cout << "\n Enter Radius of the Circle : ";
            cin >> x;
            Shape a1(x); //Class area, object is created : a1
            a1.displayc();
        }
        break;

        case 2:
        {
            cout << "\n Enter Length and Breadth of the Rectangle : ";
            cin >> x >> y;
            Shape a2(x, y);
            a2.display();
        }
        break;
    
        case 3:
        {
            cout << "\n Enter Sides of the Triangle : ";
            cin >> x >> y >> z;
            Shape a3(x, y, z);
            a3.display();
        }
        break;

        case 4:
        {
            cout << "\n Enter the Sides of the Square :";
            cin >> x;
            Shape a4(x);
            a4.display();
        }
        break;

        case 5:
            exit(0);

        default:
            cout << "\n\n Invalid Choice ...";
        }
    } while (ch != 5);
    return 0;
}