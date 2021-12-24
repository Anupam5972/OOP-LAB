// Wap to create a Telephone class. Which has two data member name and phno. And one function search. which will accept name and display person phono no and same function accept phono and retrurns name by using function oberloading.
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Telephone
{
public:
    int no, mob;
    char name[10];
    void acc()
    {
        cout << "\nEnter Person no : ";
        cin >> no;
        cout << "\nEnter Person name : ";
        cin >> name;
        cout << "\nEnter Person mob no : ";
        cin >> mob;
    }
    void acc(char nme[])
    {
        if (strcmp(nme, name) == 0)
        {
            cout << "\n Person name   : " << name;
            cout << "\n Person mob no : " << mob << endl;
        }
    }
    void acc(int mno)
    {
        if (mno == mob)
        {
            cout << "\n Person name   : " << name;
            cout << "\n Person mob no : " << mob << endl;
        }
    }
    void dis()
    {
        cout << "\n Person details" << endl;
        cout << "\n Person no     : " << no;
        cout << "\n Person name   : " << name;
        cout << "\n Person mob no : " << mob << endl;
    }
};
int main()
{
    char nme[10];
    int mno, i, no, ch;
    do
    {
        cout << "1. Accept Person details\n";
        cout << "2. Display Person details\n";
        cout << "3. To search the mobile number of a given Person\n";
        cout << "4. To search the Person details of a given mobile number\n";
        cout << "5. Exit\nEnter your choice :- ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter how many Person Details you want to enter: ";
            cin >> no;
            Telephone p[20];
            for (i = 0; i < no; i++)
            {
                p[i].acc();
            }
            break;
        case 2:
            for (i = 0; i < no; i++)
                p[i].dis();
            break;
        case 3:
            cout << "\nEnter Person name search for mob no : ";
            cin >> nme;
            for (i = 0; i < no; i++)
                p[i].acc(nme);
            break;
        case 4:
            cout << "\nEnter mob no search for Person name : ";
            cin >> mno;
            for (i = 0; i < no; i++)
                p[i].acc(mno);
            break;
        }
    } while (ch != 5);
}
