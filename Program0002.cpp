Ques:
Design a class called complex that represents complex numbers, class should contain data members that store real & imaginary parts. Moreover it should contain data members that can perform simple elementary operations such as addition subtraction multiplication division contain print member function that prints complex numbers and the result of elementary operations in the form of a+i*b .

CODE:

#include<iostream>
#include<math.h>
using namespace std;
class complex
{
	public:
		float rel;
		float img;
		complex add(complex);
		complex sub(complex);
		complex mul(complex);
		complex div(complex);
		void print();
};
complex complex::add(complex c1)
{
	complex c2;
	c2.rel=c1.rel+rel;
	c2.img=c1.img+img;
	cout<<"\nADDITION"<<endl;
	return c2;
}
complex complex::sub(complex c1)
{
	complex c2;
	c2.rel=rel-c1.rel;
	c2.img=img-c1.img;
	cout<<"SUBTRACTION"<<endl;
	return c2;
}
complex complex::mul(complex c1)
{
	complex c2;
	c2.rel=(rel*c1.rel-(img*c1.img));
    c2.img=(rel*c1.img+c1.rel*img);
	cout<<"MULTIPLICATION"<<endl;
	return c2;
}
complex complex::div(complex c1)
{
	complex c2;
	c2.rel=((rel*c1.rel)+(img*c1.img))/(pow(c1.rel,2)+pow(c1.img,2));
	c2.img=((c1.rel*img)-(rel*c1.img))/(pow(c1.rel,2)+pow(c1.img,2));
	cout<<"DIVISION"<<endl;
	return c2;
}
void complex::print()
{
	cout<<rel<<"+i("<<img<<")"<<endl<<"\n";
}
int main()
{
	complex c1,c2,c3;
	cout<<"****Logical operations on complex numbers****\nEnter real and imaginary part of 1st complex number"<<endl;
	cin>>c1.rel>>c1.img;
	cout<<"Enter real and imaginary part of 2nd complex number"<<endl;
	cin>>c2.rel>>c2.img;
	c3=c1.add(c2);
	c3.print();
	c3=c1.sub(c2);
	c3.print();
	c3=c1.mul(c2);
	c3.print();
	c3=c1.div(c2);
	c3.print();
}
