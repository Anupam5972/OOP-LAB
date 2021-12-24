//Wap to accept roll, name & mark of 5 students and display them by using array of objects.

#include <iostream>
#include <string>
using namespace std;

class std
{
private:
    string name;
    int marks;

public:
    void getDetails();
    void setDetails();
};

void std::setDetails()
{
    cout << "Enter the name : " << endl;
    cin >> name;
    cout << "Enter total marks : " << endl;
    cin >> marks;
}

void std::getDetails()
{
    cout << "Name : " << name << " ,marks : " << marks << endl;
}

int main(int argc, char const *argv[])
{
    int count;
    cout << "Enter the count of students : ";
    cin >> count;

    if (count > 0)
    {
        std stdArr[count];
        for (int i = 0; i < count; i++)
        {
            cout << "For student " << i + 1 << " :" << endl;
            stdArr[i].setDetails();
        }

        cout << "\nYou have entered : " << endl;
        for (int i = 0; i < count; i++)
        {
            stdArr[i].getDetails();
        }
    }
    else
    {
        cout << "Please enter a valid number." << endl;
    }
    return 0;
}