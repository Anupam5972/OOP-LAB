// Wap create a Father class data mamber is name and age. And create Son class, derived from Father which will accept name
// and age. if son age is greater than Father age it display err otherwise it display all info about Father and son.
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class calculate;
class Father
{
protected:
    string name;
    int age;

public:
    void getdata()
    {
        cout << "\n Enter Father's Name:";
        getline(cin, name);
        cout << " Enter Father's Age:";
        cin >> age;
    }
};
class Son : public Father
{
    int age1;
    string son_name;

public:
    void getdata1()
    {
        cout << "\n Enter Son's Name:";
        fflush(stdin);
        getline(cin, son_name);
        cout << " Enter Son's Age:";
        cin >> age1;
    }
    void check()
    {
        if (age1 > age)
        {
            cout << " !!! ERROR !!!";
        }
        else
        {
            cout << " Displaying Details :\n";
            cout << "\t Father's Name = " << name;
            cout << "\n\t Father's Age = " << age;
            cout << "\n\t Son's Name = " << son_name;
            cout << "\n\t Son's Age= " << age1;
        }
    }
};

int main()
{
    Son obj;
    obj.getdata();
    obj.getdata1();
    obj.check();
    return 0;
}
