// Write a program to add two no by using copy constructor.
#include <iostream>
using namespace std;
class Add
{
    float num;

public:
    Add()
    {
        cout << "default constructor" << endl;
        num = 0;
    }
    Add(float r)

    {
        cout << "parameterized construction";
        num = r;
    }
    Add(Add &c)
    {
        cout << "copy constructor" << endl;
        num = c.num;
    }
    void getData()
    {
        cout << "the Add number are: " << num << endl;
    }
    void showData()
    {
        cout << "the sum is: ";
        cout << num << endl;
    }

    Add addition(Add x, Add y)
    {
        Add temp;
        temp.num = x.num + y.num;
        return temp;
    }
};

int main()
{
    Add n2(3), n3(n2), n1;

    n2.getData();
    n3.getData();
    n1 = n1.addition(n2, n3);
    n1.showData();

    return 0;
}