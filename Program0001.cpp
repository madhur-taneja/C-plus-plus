Ques: 
Write a cpp program to swap the values of two variables using call by value and call by reference mechanism.

CODE :

#include<iostream>
using namespace std;
void swapv(int,int);
void swapr(int &,int &);
int main()
{
	int a1,a2;
	cout<<"Please enter 2 values to swap."<<endl;
	cout<<"a=";
	cin>>a1;
	cout<<"b=";
	cin>>a2;
	cout<<"\nSwapping done using call by value"<<endl;
	swapv(a1,a2);
	cout<<"Swapping done using call by reference"<<endl;
	swapr(a1,a2);
}
void swapv(int a1,int a2)
{
	int temp;
	temp=a1;
	a1=a2;
	a2=temp;
	cout<<"a="<<a1<<"\nb="<<a2<<"\n\n";
}
void swapr(int &a1,int &a2)
{
	int temp;
	temp=a1;
	a1=a2;
	a2=temp;
	cout<<"a="<<a1<<"\nb="<<a2<<"\n\n";
}
