#include <iostream>

using namespace std;

class employee
{
    int emp_number;
    char emp_name[20];
    float emp_basic;
    float emp_ta;
    float emp_hra;
    float emp_net_sal;

public:
    void get_emp_details();
    float find_net_salary(float basic, float ta, float hra);
    void show_emp_details();
};

void employee ::get_emp_details()
{
    cout << "\nEnter employee number: ";
    cin >> emp_number;
    cout << "\nEnter employee name: ";
    cin >> emp_name;
    cout << "\nEnter employee basic: ";
    cin >> emp_basic;
    cout << "\nEnter employee TA: ";
    cin >> emp_ta;
    cout << "\nEnter employee HRA: ";
    cin >> emp_hra;
}

float employee ::find_net_salary(float basic, float ta, float hra)
{
    return (basic + ta + hra);
}

void employee ::show_emp_details()
{
    cout << "\n\n**** Details of  Employee ****";
    cout << "\nEmployee Name      :  " << emp_name;
    cout << "\nEmployee number    :  " << emp_number;
    cout << "\nBasic salary       :  " << emp_basic;
    cout << "\nEmployee TA        :  " << emp_ta;
    cout << "\nEmployee HRA       :  " << emp_hra;
    cout << "\nNet Salary         :  " << find_net_salary(emp_basic , emp_ta, emp_hra);
    cout << "\n-------------------------------\n\n";
}

int main()
{
    employee emp;
    emp.get_emp_details();
    emp.show_emp_details();
    return 0;
}
