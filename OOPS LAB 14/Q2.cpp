// Wap to create exception if user enter 0 it raise exception "zero entered" if enter negative it raise "Negative Exception" if enter positive then it raise "Positive Exception"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int x;
    try
    {
        cout << "Enter any Value: ";
        cin >> x;
        if (x == 0)
            throw("Zero");
        else if (x < 0)
            throw x;
        else
            throw 'x';
    }
    catch (int x)
    {
        cout << "Negative Exception Block, value is: " << x << endl;
    }
    catch (char const *b)
    {
        cout << "Zero Exception Block, value is: " << x << endl;
    }
    catch (char a)
    {
        cout << "Positive Exception Block, value is: " << x << endl;
    }
    return 0;
}