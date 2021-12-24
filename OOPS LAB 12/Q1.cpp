// virtual function
// create Father class and Son class Son from that Father class.Has same member function activity.Father activity is go to office.Student Task is goto School.

// 1. Wap to display the only Son task without display the father activity by using virtual function.

// 2. Wap to display only Father activity without display son activity using virtual function.

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
    Father *bptr;
    Son d;
    bptr = &d;
    bptr->Activity();
}