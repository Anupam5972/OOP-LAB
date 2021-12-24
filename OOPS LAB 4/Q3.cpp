/*Wap to take input eno,ename,esal of 5 employees.And calculate TA=7% of basic HAR=9% of basic and take 
appropriate function and display employee details with their gross salary.*/

#include <iostream>
using namespace std;
class Employee
{
    char ename[30];
    int eno;
    float esal, har, ta, gross_salary;

public:
    void read_emp_details(int count)
    {
        cout << "\n\n*** Enter Employee " << count << " Details ***";
        cout << "\nEmployee Number: ";
        cin >> eno;
        cout << "Employee Name: ";
        cin >> ename;
        cout << "Basic Salary: ";
        cin >> esal;
        cout << "\n---- Employee " << count << " Datails are saved ----\n\n";
    }
    float find_net_salary()
    {
        har = esal * 0.09;
        ta = esal * 0.07;
        gross_salary = (esal + har + ta);
        return gross_salary;
    }
    void display_emp_details(int count)
    {
        cout << "\n*** Employee " << count << " Details ***";
        cout << "\nEmployee Number	: " << eno;
        cout << "\nEmployee Name	: " << ename;
        cout << "\nNet Salary: " << gross_salary;
        cout << "\n--------------------------\n";
    }
};
int main()
{
    Employee emp[100];
    int number_of_emp, count;
    cout << "\nPlease enter the number of Employees: ";
    cin >> number_of_emp;
    for (count = 0; count < number_of_emp; count++)
    {
        emp[count].read_emp_details(count + 1);
    }
    for (count = 0; count < number_of_emp; count++)
    {
        emp[count].find_net_salary();
    }
    for (count = 0; count < number_of_emp; count++)
    {
        emp[count].display_emp_details(count + 1);
    }
    return 0;
}
