// Question no 2 try to do with using function.
#include <iostream>
#include <string>
using namespace std;

void check(int x)
{
    if (x == 0)
        throw("Zero");
    else if (x < 0)
        throw x;
    else
        throw 'x';
}
int main()
{
    int n;
    cout << "Enter a numbers : ";
    cin >> n;
    try
    {
        check(n);
    }
    catch (int n)
    {
        cout << "Negative exception.\n";
    }
    catch (char const *b)
    {
        cout << "Zero entered.\n";
    }
    catch (char a)
    {
        cout << "Positive exception.\n";
    }
    return 0;
}