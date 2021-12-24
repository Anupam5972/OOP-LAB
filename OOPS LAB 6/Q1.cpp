// Write a program to create default constructor which accept roll, name & mark and display it.
#include <iostream>
using namespace std;
#include <string.h>

class Student
{
    int Roll;
    char Name[25];
    float Marks;
public:
    Student()
    {
        Roll = 1;
        strcpy(Name, "Anupam");
        Marks = 96;
    }
    void Display()
    {
        cout << "\tRoll : " << Roll;
        cout << "\n\tName : " << Name;
        cout << "\n\tMarks : " << Marks;
    }
};
int main()
{
    Student S; 
    S.Display();
    return 0;
}