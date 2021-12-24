// 3. Wap to display Both father and son activity by using virtual function.
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
    Father *bptr, *bptr2, d2;
    Son d;
    bptr = &d;
    bptr2 = &d2;
    bptr->Activity();
    bptr2->Activity();
}