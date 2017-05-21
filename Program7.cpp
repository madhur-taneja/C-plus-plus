Ques:
Create a class called 'TIME' that has three integer data members for hours, minutes and seconds constructor to initialize the object to zero constructor to initialize the object to some constant value member function to add two TIME objects member function to display time in HH:MM:SS format .Write a main function to create two TIME objects, add them and display the result in HH:MM:SS format. 

CODE:

#include<iostream>
using namespace std;
class TIME
{
	int hr;
	int min;
	int sec;
	public:
		TIME();
		TIME(int,int,int);
		TIME add(TIME);
		void display();
};
TIME::TIME()
{
	hr=0;
	min=0;
	sec=0;
};
TIME::TIME(int h,int m,int s)
{
	hr=h;
	min=m;
	sec=s;
}
TIME TIME::add(TIME t1)
{
	TIME t3;
	t3.hr=hr+t1.hr;
	t3.min=min+t1.min;
	t3.sec=sec+t1.sec;
	while(t3.sec>=60)
	{
		t3.min++;
		t3.sec-=60;
	}
	while(t3.min>=60)
	{
		t3.hr++;
		t3.min-=60;
	}
	return t3;
}
void TIME::display()
{
	cout<<"Sum of Entered time ::"<<endl<<"HH::MM::SS"<<endl;
	cout<<hr<<":"<<min<<":"<<sec;
}
int main()
{
	int h[2],m[2],s[2];
	for(int i=1;i<=2;i++)
	{
		cout<<"Enter Time "<<i<<endl;
		cin>>h[i]>>m[i]>>s[i];
	}
	TIME t1(h[1],m[1],s[1]);
	TIME t2(h[2],m[2],s[2]);
	TIME t3;
	t3=t2.add(t1);
	t3.display();
}
