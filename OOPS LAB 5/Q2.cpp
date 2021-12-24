#include <iostream>
#include <string.h>
using namespace std;

class msg
{
	private:
		char str[30];
		static int count;
	public:
		msg()
		{
			count++;
		}
		void initialmsg(char s[])
		{
			strcpy(str,s);
		}
		void prtmsg(void)
		{
			cout << str << endl;
		}
		static int totalObjects(void)
		{
			return count;
		}
};

int msg::count =0;
int main()
{
	msg m1;
	msg m2;
	msg m3;
	msg m4;
	
	m1.initialmsg("Message one");
	m2.initialmsg("Message two");
	m3.initialmsg("Message three");
	m4.initialmsg("Message four");
	
	m1.prtmsg();
	m2.prtmsg();
	m3.prtmsg();
	m4.prtmsg();
	
	cout << "Total objects created: " << msg::totalObjects() << endl;
	
	return 0;
}