#include <iostream>
using namespace std;
class student
{
    int number, marks[3], total;
    char name[20];
    float avg;

public:
    void initialize();
    friend class fstudent;
};
class fstudent
{
public:
    void totavg(student &);
    void display(student);
};
void student::initialize()
{
    int i;
    cout << "Roll Number: ";
    cin >> number;
    cout << "Name: ";
    cin >> name;
    cout << "Marks in 3 Subjects: ";
    for (i = 0; i < 3; i++)
        cin >> marks[i];
}
void fstudent::totavg(student &st1)
{
    int i, sum = 0;
    for (i = 0; i < 3; i++)
        sum = sum + st1.marks[i];
    st1.total = sum;
    st1.avg = st1.total / 3.0;
}
void fstudent::display(student st2)
{
    int i;
    cout << st2.number << " " << st2.name << " ( ";
    for (i = 0; i < 3; i++)
        cout << st2.marks[i] << " ";
    cout << ") | " << st2.total << " | " << st2.avg << endl;
}
int main()
{
    student st[5];
    fstudent fst;
    int number, i;
    cout << "No. of Students: ";
    cin >> number;
    for (i = 0; i < number; i++)
    {
        cout << "Student " << i + 1 << "\n";
        st[i].initialize();
    }
    for (i = 0; i < number; i++)
        fst.totavg(st[i]);
    cout << "\nNumber, Name, Marks, Total and Average of ";
    cout << number << " students:\n";
    cout << "-----------------------------------------------------\n";
    for (i = 0; i < number; i++)
        fst.display(st[i]);
}