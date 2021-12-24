// 4) Create a class student which stores name, date-of-birth and date-of-joining of a student. The data members date-of-birth and date-of-joining should be the objects of another class called 'date'. Input the data for 10 students and display it.
#include <iostream>
using namespace std;

#define MAX 10
class student
{
private:
    char name[30];
    int rollNo;

public:
    void getDetails(void);
    void putDetails(void);
};

class Date
{
private:
    int Dob, m1, m2, y1, y2;
    int Doj;

public:
    void DOBDetails(void);
    void DOJDetails(void);
};

void student::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
}
void student::putDetails(void)
{
    cout << "Student details:\n";
    cout << "Name: " << name << ", Roll Number: " << rollNo << endl;
}
void Date::DOBDetails(void)
{
    cout << "Enter Date of birth";
    cin >> Dob;
    cin >> m1;
    cin >> y1;
    cout << "Enter Date of joining";
    cin >> Doj;
    cin >> m2;
    cin >> y2;
}
void Date::DOJDetails(void)
{
    cout << "Student details:\n";
    cout << "Date of birth: " << Dob << " / " << m1 << " / " << y1 << ",Date of joining: " << Doj << " / " << m2 << " / " << y2 << endl;
}
int main()
{
    student std[MAX];
    Date std1[MAX];
    int n, loop;
    cout << "Enter total number of students: ";
    cin >> n;
    for (loop = 0; loop < n; loop++)
    {
        cout << "Enter details of student " << loop + 1 << ":\n";
        std[loop].getDetails();
        std1[loop].DOBDetails();
    }
    cout << endl;
    for (loop = 0; loop < n; loop++)
    {
        cout << "Details of student " << (loop + 1) << ":\n";
        std[loop].putDetails();
        std1[loop].DOJDetails();
    }
    return 0;
}