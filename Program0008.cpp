Ques:
Write a C++ program to overload unary operator ++ and – to work with counter class object. The counter class should have one data member as count.

CODE:

#include<iostream>
using namespace std;
class counter
{
	static int count;
	public:
		void operator--();
		void operator++();
		void display()
		{
			cout<<"Count="<<count<<endl;
		}
};
void counter::operator--()
{
	count--;
}
void counter::operator++()
{
	count++;
}
int counter::count=0;
int main()
{
	counter c1;
	c1.display();
	++c1;
	c1.display();
	--c1;
	c1.display();
}
