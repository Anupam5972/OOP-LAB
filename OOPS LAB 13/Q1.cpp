//(Pointers to objects) Define a class Item that is used to store and display the information regarding the item number and its price. Write a program to store and display the details of one items by using both normal object and pointer to object separately. Display appropriate message wherever necessary.
#include <iostream>
using namespace std;

class Item
{
private:
    int i, j;

public:
    void getdata()
    {
        cout << "Enter Item number" << endl;
        cin >> i;
        cout << "Enter Item's Price" << endl;
        cin >> j;
    }

    void prndata(void)
    {
        cout << "\nItem's No. " << i << "\n" << "Item's Price: " << j << endl;
    }
};

int main()
{
    Item D1;
    Item *dptr;
    cout << "Using the object" << endl;
    D1.getdata();
    cout << "using the object ";
    D1.prndata();
    dptr = &D1;
    cout << "using the object pointer ";
    dptr->prndata();
    return 0;
}