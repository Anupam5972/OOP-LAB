#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class calculate;
class Father
{
	protected:
		string name;
		int age;
	public:
		 void getdata()
		 {
		 	cout<<"\n Enter Father's Name:";
		 	getline(cin,name);
            cout<<" Enter Father's Age:";
		 	cin>>age;
		 }
		 void putdata()
		 {
		 	cout<<"\n Displaying Details :\n";
			cout<<"\t Father's Name = "<<name;
			cout<<"\n\t Father's Age = "<<age;
		 }
};
class Son: public Father
{
	int age;
	string name;
	public:
		void getdata()
		{
			cout<<"\n Enter Son's Name:";
			fflush(stdin);
			getline(cin,name);
            cout<<" Enter Son's Age:";
		 	cin>>age;	
		}
		 void putdata()
		 {
		 	cout<<"\n Displaying Details :\n";
			cout<<"\t Son's Name = "<<name;
			cout<<"\n\t Son's Age = "<<age;
		 }
		
};
class Grand_Son: public Son
{
	int age;
	string name;
	public:
		void getdata()
		{
			cout<<"\n Enter Grand Son's Name:";
			fflush(stdin);
			getline(cin,name);
            cout<<" Enter Grand Son's Age:";
		 	cin>>age;	
		}
		 void putdata()
		 {
		 	cout<<"\n Displaying Details :\n";
			cout<<"\t Grandson's Name = "<<name;
			cout<<"\n\t Grandson's Age = "<<age;
		 }
};
int main()
{
	Grand_Son obj;
	obj.Father::getdata();
	obj.Son::getdata();
	obj.Grand_Son::getdata();
	obj.Father::putdata();
	obj.Son::putdata();
	obj.Grand_Son::putdata();
	return 0;
}