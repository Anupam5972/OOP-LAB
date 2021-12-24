#include <iostream>
using namespace std;
int main()
{
    int var = 0;
    int choice;
    cout << "Simple C++ Program for Catch All or Default Exception Handling\n";
    try
    {
        if (var == 0)
        {
            throw var;
        }
    }
    catch (float ex)
    {
        cout << "Float Exception catch : Value :" << ex;
    }
    catch (...)
    {
        cout << "Default Exception Catch";
    }
    try
    {
        cout << "\nEnter any choice: \n1. integer \n2. character \n3. float" << endl;
        cin >> choice;
        if (choice == 0)
            cout << "Hello" << endl;
        else if (choice == 1)
            throw(100);
        else if (choice == 2)
            throw('x');
        else if (choice == 3)
            throw(1.23f);
        else
            cout << "Bye Bye !!!" << endl;
    }
    catch (int a)
    {
        cout << "Integer Exception Block, value is: " << a << endl;
    }
    catch (char b)
    {
        cout << "Character Exception Block, value is: " << b << endl;
    }
    catch (float c)
    {
        cout << "Float Exception Block, value is: " << c << endl;
    }
    return 0;
}