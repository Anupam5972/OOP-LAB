#include <iostream>
using namespace std;
int main()
{
    int Val, a;
    try
    {
        cout << "Enter any Age: ";
        cin >> Val;
        if (Val == 0)
            cout << "Person is not born " << endl;
        else if (Val <= 1 && Val >= 100)
            throw(Val);
        else
            throw(Val);
    }
    catch (int a)
    {
        cout << "Valid Age " << a << endl;
    }
    catch (float b)
    {
        cout << "Invalid Age " << b << endl;
    }
    return 0;
}