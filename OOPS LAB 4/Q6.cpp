#include<iostream>
using namespace std;

class rectangle
{
    int width,height;
    public:
    void input()
    {
        cout<<"Enter the height and width of the rectangle :";
        cin>>height>>width;
    }

    int area()
    {
        return(height*width);
    }
};
int main()
{
    class rectangle r,*ptr;
    ptr=&r;

    ptr->input();
    cout<<"The area of the rectangle is :"<<ptr->area()<<endl;

    return 0;
}