// Wap to find area of circle, square, rectangle & triangle by using function overloading.
#include <iostream>
using namespace std;
int area(int);
int area(int, int);
float area(float);
float area(float, float);
int main()
{
    int s, l, b;
    float r, bs, ht;
    cout << "Enter radius of circle:";
    cin >> r;
    cout << "Enter side of a square:";
    cin >> s;
    cout << "Enter length and breadth of rectangle:";
    cin >> l >> b;
    cout << "Enter base and height of triangle:";
    cin >> bs >> ht;
    
    cout << "\nArea of circle is " << area(r);
    cout << "\nArea of square is" << area(s);
    cout << "\nArea of rectangle is " << area(l, b);
    cout << "\nArea of triangle is " << area(bs, ht);
}
int area(int s)
{
    return (s * s);
}
int area(int l, int b)
{
    return (l * b);
}
float area(float r)
{
   return (3.14 * r * r);
}
float area(float bs, float ht)
{
   return ((bs * ht) / 2);
}
// 2. Wap to count how many objects created.
// 3. Wap to add two no using friend function.
// 4. Wap to find GCD of two no of two different class by using friend function.
// 5. Wap to create a class which accept two no and display it by using static data member and static member function.
// 6. Wap to create a Telephone class. Which has two data member name and phno. And one function search. which will accept name and display person phono no and same function accept phono and retrurns name by using function oberloading.
