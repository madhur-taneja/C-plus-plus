Ques:
Write Program to demonstrate use of constructors and destructors for performing dynamic operations

CODE:

#include<iostream>
#include<string.h>
using namespace std;
class data
{
	static int count;
	char string[100];
	public:
		data(const char*);
		~data()
		{
			cout<<"Release memory allocated to "<<string<<endl;
		}
		void show();
		void compare(data &);
};
int data::count=1;
data::data(const char* s)
{
	strcpy(string,s);
}
void data::show()
{
	cout<<"Data "<<count<<"= "<<string<<endl;
	count++;
}
void data::compare(data &d)
{
	int a;
	a=strcmp(string,d.string);
	if(a)
		cout<<"Both Objects have different text"<<endl;
	else
		cout<<"Both Objects have same text"<<endl;
}
int main()
{
data d1("Obfuscation");
data d2("Obstruction");
d1.show();
d2.show();
d1.compare(d2);
return 0;
}
