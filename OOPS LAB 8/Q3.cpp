#include<iostream>

using namespace std;

class Rectangle
{
	protected:
		int a,b;
	public:
		 void getdata()
		 {
		 	cout<<"\n Enter value of length:";
		 	cin>>a;
            cout<<" Enter value of breadth:";
		 	cin>>b; 	
		 }
		 void area()
		  {
			int ar;
			ar=(a*b);
		    cout<<"\n Area of Rectangle:"<<ar;
		  }
};
class Triangle
{
	protected:
		int ba,h;
	public:
		void get_data()
		{
		 	cout<<"\n Enter value of Base:";
		 	cin>>ba;
            cout<<" Enter value of Height:";
		 	cin>>h; 
		}
		void area()
		{
			int ar;
			ar=(ba*h)/2;
            cout<<"\n Area of Triangle:"<<ar;
		}
};
class AREA: public Rectangle , public Triangle
{
	public:
		
};

int main()
{
	AREA obj;
	obj.getdata();
	obj.get_data();
	obj.Rectangle::area();
	obj.Triangle::area();
	return 0;
}