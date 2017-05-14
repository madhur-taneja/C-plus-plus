Ques:
Create a class 'COMPLEX' to hold a complex number. Write a friend function to add two complex numbers. Write a main function to add two COMPLEX objects. 

CODE:

#include<iostream>
using namespace std;
class COMPLEX
{
	float real;
	float imag;
	public:
		COMPLEX(){};
		COMPLEX(float,float);
		friend COMPLEX add(COMPLEX,COMPLEX);
		void display();
};
COMPLEX::COMPLEX(float r,float i)
{
	real=r;
	imag=i;
}
COMPLEX add(COMPLEX c1,COMPLEX c2)
{
	COMPLEX c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	return c3;
}
void COMPLEX::display()
{
	cout<<"Sum of entered Complex numbers ::"<<endl;
	cout<<real<<"+i*"<<imag;
}
int main()
{
	float r[2],i[2];
	for(int k=1;k<=2;k++)
	{
		cout<<"Enter "<<k<<" complex number"<<endl;
		cin>>r[k]>>i[k];
	}
	COMPLEX c1(r[1],i[1]),c2(r[2],i[2]),c3;
	c3=add(c1,c2);
	c3.display();
}
