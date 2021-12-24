// (this Pointer) Write a program to display the contains of an object, when local variable’s name is same as member’s name by using this pointer.
#include <iostream>
using namespace std;

class Pointer
{
private:
   int x;

public:
   void setX(int x)
   {
      this->x = x;
   }
   void print()
   {
      cout << "x = " << x << endl;
   }
};

int main()
{
   Pointer obj;
   int x = 35;
   obj.setX(x);
   obj.print();
   return 0;
}