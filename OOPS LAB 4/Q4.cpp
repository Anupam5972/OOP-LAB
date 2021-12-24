#include <iostream>
using namespace std;
class student
{
    char name[30];
    int roll, i;
    float marks[5], avg;

public:
    void input()
    {
        cout << "Kindly enter the details\n";
        cout << "Enter name and roll\n";
        cin >> name >> roll;
        cout << "Enter marks for 3 sub\n";
        for (i = 0; i < 3; i++)
            cin >> marks[i];
    }
    float average()
    {
        int sum = 0, avg = 0;
        for (i = 0; i < 3; i++){
            sum += marks[i];}
        avg = sum / 3;
        return avg;
    }
    void output()
    {
        cout << "Entered details are:\n";
        cout << "name \n" << name << "\nroll no\n" << roll;
        cout << "\nmarks are\n";
        for (i = 0; i < 3; i++)
        {
            cout << marks[i] <<endl;
        }
        cout << "average is " << avg;
    }
};
int main()
{
    int n, i;
    cout << "enter no of students\n";
    cin >> n;
    student s[n];

    for (i = 0; i < n; i++)
    {
        cout << "For student " << i + 1 << " :" << endl;
        s[i].input();
    }
    for (i = 0; i < n; i++)
        s[i].average();

    for (i = 0; i < n; i++)
        s[i].output();
    return 0;
}