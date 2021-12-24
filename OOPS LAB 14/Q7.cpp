// Wap to create two class Father and Son. Data member fname,fage,sname,sage. If father age is less than son age then it raise exception "Son age is exceed than father".
#include <iostream>
using namespace std;

class Father
{
public:
    string fname;
    int fage;
};
class Son : public Father
{
public:
    string sname;
    int sage;
};
int main()
{
    Son s;
    cout << "Enter the name of father and son: ";
    cin >> s.fname >> s.sname;
    cout << "Enter the age of father and son: ";
    cin >> s.fage >> s.sage;
    try
    {
        if (s.fage < s.sage)
            throw string("Son age is exceed than father");
        else
            cout << "Son age is less than father" << endl;
    }
    catch (string e)
    {
        cout << e << endl;
    }
    return 0;
}
