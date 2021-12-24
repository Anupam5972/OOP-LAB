// Modify the program LE8.1 by creating an array of n objects using pointers. Show the details of n items by using pointers to object concept
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
        cout << "\nItem's No. " << i << "\nItem's Price: " << j << endl;
    }
};

int main()
{
    int n, i;
    Item *ob[10];
    cout << "Enter Total no. of Items";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        ob[i]=new Item;
        ob[i]->getdata();
    }
    for (i = 0; i < n; i++)
    {
        ob[i]->prndata();
    }
    return 0;
}