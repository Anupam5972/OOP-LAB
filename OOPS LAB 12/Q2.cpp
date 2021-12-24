// 2. Wap to display only Father activity without display son activity using virtual function.
#include <iostream>
using namespace std;

class Father
{
public:
    virtual void Activity()
    {
        cout << "Activity Father : Go to Office" << endl;
    }
};

class Son : public Father
{
public:
    void Activity()
    {
        cout << "Activity Son class : Go to School" << endl;
    }
};

int main()
{
    Father *bptr, d;
    bptr = &d;
    bptr->Activity();
}