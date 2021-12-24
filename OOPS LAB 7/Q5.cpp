// Wap to create a Student class which data member's are roll, name & mark of 3 subject. And cleare Result class which will display all info along
// with grade.
// if 90 -80 O
// if 80-70 E  like that
#include <iostream>
#include <stdio.h>
using namespace std;
class student
{
    int roll;
    char name[25];
public:
    student()
    {
        cout << "Enter the student's information" << endl;
    }
    void getdata()
    {
        cout << "\n enter the student roll no.  ";
        cin >> roll;
        cout << "\n enter the student name  ";
        cin >> name;
    }
    void putdata()
    {
        cout << "\n the student roll no: " << roll;
        cout << "\n the student name: " << name;
    }
};
class marks : public student
{
    int sub1;
    int sub2;
    int sub3;
    int avg;
public:
    void input()
    {
        getdata();
        cout << "\n enter the marks1: ";
        cin >> sub1;
        cout << "\n enter the marks2: ";
        cin >> sub2;
        cout << "\n enter the marks3: ";
        cin >> sub3;
    }
    void output()
    {
        putdata();
        cout << "\n marks1: " << sub1;
        cout << "\n marks2: " << sub2;
        cout << "\n marks3: " << sub3 << "\n";
    }
    void calculate()
    {
        avg = (sub1 + sub2 + sub3) / 3;
        if(avg>=90)
            cout<<"\nO grade"<<" with total Marks "<< avg*3 <<endl;
        if(avg>=80 && avg < 90)
            cout<<"\nE grade"<<" with total Marks "<< avg*3 <<endl;
        if(avg>=70 && avg < 80)
            cout<<"\nA grade"<<" with total Marks "<< avg*3 <<endl;
        if(avg>=60 && avg < 70)
            cout<<"\nB grade"<<" with total Marks "<< avg*3 <<endl;
        if(avg>=50 && avg < 60)
            cout<<"\nC grade"<<" with total Marks "<< avg*3 <<endl;
        if(avg>=40 && avg < 50)
            cout<<"\nD grade"<<" with total Marks "<< avg*3 <<endl;
        if(avg<40)
            cout<<"FAIL!!!";
    }
};
int main()
{
    marks m1;
    int ch;
    int count = 0;
    do
    {
        cout << "\n1.input data";
        cout << "\n2.output data";
        cout << "\n3.Calculate Grade";
        cout << "\n4.exit\n";
        cout << "\nEnter the choice :: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            m1.input();
            count++;
            break;

        case 2:
            m1.output();
            break;

        case 3:
            m1.calculate();
            break;
        }
    } while (ch != 4);
}