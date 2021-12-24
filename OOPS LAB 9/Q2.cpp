// 2) WAP in which there is a global variable, a local variable for main function and a variable in a nested scope inside main, with the same name. Print all the three variables.
#include<iostream>
using namespace  std;

string str="global scope";

int main()
{
    string str="local scope";
    if (true){
        string str="if scope";
        cout << str << endl;
    }
    cout << str << endl;
    cout << ::str << endl;
}