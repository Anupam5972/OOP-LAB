// Question no 2 try to do using three dot(.) mechanism
#include <iostream>
using namespace std;
int main()
{
    int  a, b;
    cout << "Enter any Value of a and b: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw(0);
        else if (b < 0)
            throw string("-1");
        else
            cout << "a/b = " << a / b << endl;
    }
    catch (int e)
    {
        cout << "Zero Exception Block " << endl;
    }
    catch (...)
    {
        cout << "Negative Exception Block " << endl;
    }
    return 0;
}