// Write a program to accept first name and last name and merge it. And display using dynamic constructor.
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;
class student
{
    char first[10];
    char last[10];

public:
    student()
    {
        cout << "enter first name\n";
        cin >> first;
        cout << "enter last name\n";
        cin >> last;
        cout << first << " " << last;
    }
};
int main()
{
    student c;
}