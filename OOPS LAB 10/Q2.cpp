// Wap to create One Base class Father data member fname. And Son class derived from Father dada member sname .
// And GrandSon derived from Son data member gname. Use appropriate function that GrandSon will display all name by it concatenating.

#include <iostream>
using namespace std;

class Fname
{

public:
    string fname1, fname2;
    Fname()
    {
        cout << "Enter Father's Name:" << endl;
        cin >> fname1;
        cin >> fname2;
    }
};

class Sname 
{

public:
    string sname1;
    Sname()
    {
        cout << "Enter Son's Name:" << endl;
        cin >> sname1;
    }
};

class Gname : public Fname, public Sname
{
    string gname1;

public:
    Gname()
    {
        cout << "Enter Grandson's Name:" << endl;
        cin >> gname1;
        cout << "Grandson's Name is: " << fname1 << " " << sname1 << " " << gname1 << " " << fname2;
    }
};

int main()
{
    Gname c;
    return 0;
}