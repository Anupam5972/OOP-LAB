// 1) WAP to declare a class which stores a complex number. Include a member function which compares the modulus of the two complex class objects and returns the object with higher value.
//  Include a parameterized constructor which arguments with same name as that of the class data members. 
#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imag, C1 = 0, C2 = 0;
    
    void setvalue()
    {
        cin >> real;
        cin >> imag;
    }
    void compare(Complex c1, Complex c2)
    {
        C2 = c2.real + c2.imag;
        C1 = c1.real + c1.imag;
        real = (c1.real * c1.real) + (c1.imag * c1.imag);
        imag = (c2.real * c2.real) + (c2.imag * c2.imag);
        if (real > imag)
        {
            cout << "C1 is bigger";
        }
        else if (imag > real)
        {
            cout << "C2 is bigger";
        }
    }
};
int main()
{
    Complex c1, c2, c3;
    cout << "Enter real and imaginary part of first complex number" << endl;
    c1.setvalue();
    cout << "Enter real and imaginary part of second complex number" << endl;
    c2.setvalue();
    cout << "------- Comparision ------" << endl;
    c3.compare(c1, c2);
    return 0;
}