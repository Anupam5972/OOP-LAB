#include <iostream>
using namespace std;
class create
{
public:
create() {
cout << "Constructor" << endl;
}
~create() {
cout << "Destructor" << endl;
}
};
int main()
{
create* a = new create[3];
delete [] a;
return 0;
}