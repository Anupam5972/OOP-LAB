// Write a program to design a class representing complex numbers and having functionality of performing addition and multiplication of two complex numbers using operator overloading.

#include <iostream>
#include <conio.h>
using namespace std;

class Complex
{
public:
    int real, img;
    void add(Complex c1, Complex c2)
    {
        int x, y;
        x = c1.real + c2.real;
        y = c1.img + c2.img;
        cout << "\n(" << c1.real << "+" << c1.img << "i)+(" << c2.real << "+" << c2.img << "i)=(" << x << "+" << y << "i)";
    }
    void multiply(Complex c1, Complex c2)
    {
        int x, y;
        x = c1.real * c2.real - c1.img * c2.img;
        y = c1.real * c2.img + c1.img * c2.real;
        cout << "\n(" << c1.real << "+" << c1.img << "i)*(" << c2.real << "+" << c2.img << "i)=(" << x << "+" << y << "i)";
    }
};

int main()
{
    Complex a, b, c, d, e;
    cout << "\nEnter real and imaginary part of first complex number:";
    cin >> a.real >> a.img;
    cout << "\nEnter real and imaginary part of second complex number:";
    cin >> b.real >> b.img;
    c.add(a, b);
    d.multiply(a, b);
}