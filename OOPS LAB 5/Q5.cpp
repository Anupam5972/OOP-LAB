#include <iostream>
using namespace std;
class Five
{
private:
    static int X, Y;

public:
    static void fun()
    {   
        cout<<"Enter Value of X"<<endl;
        cin >> X;
        cout << "Value of X: " << X << endl;

        cout<<"Enter Value of Y"<<endl;
        cin >> Y;
        cout << "Value of Y: " << Y << endl;
    }
};
int Five ::X = 10;
int Five ::Y = 10;
int main()
{
    Five X;
    X.fun();
    return 0;
}