Ques:
Create a base class called 'SHAPE' having two data members of type double member
function get data( ) to initialize base class data members pure virtual member function 
display area ( ) to compute and display the area of the geometrical object.Derive two
specific classes 'TRIANGLE' and 'RECTANGLE' from the base class.Using these three classes design a program that will accept dimension of a triangle /rectangle interactively &display area.

CODE:

#include<iostream>
using namespace std;
class shape
{
	protected:
       	double l,b;
	public:
    	virtual void getdata()=0;
    	virtual void displayarea()=0;
};
class rectangle:public shape
{
	float area;
	public:
		void getdata()
		{
			cout<<"Enter dimensions of rectangle "<<endl;
			cin>>l>>b;
		}
    		void displayarea()
		{
        			area=l*b;
        			cout<<"\nArea of rectangle = "<<area<<endl<<endl;	
		}
};
class triangle:public shape
{
	float area;
    public:
    	void getdata()
		{
			cout<<"Enter dimensions of triangle "<<endl;
			cin>>l>>b;
		}
    	void displayarea()
		{
        	area=(l*b)/2;
        	cout<<"\nArea of triangle = "<<area<<endl<<endl;      
		}
};
int main()
{
	shape *sp;
    triangle t;
    int choice;
    rectangle r;
    do
	{
	    cout<<"Enter 1 or 2 or 3 to find area of rectangle,triangle ,quit resp "<<endl;
	    cin>>choice;
	    if(choice==1)
	    {
	    	sp=&r;
	    	sp->getdata();
	    	sp->displayarea();
		}
		else
		{
			sp=&t;
	    	sp->getdata();
	    	sp->displayarea();
		}
	}while(choice!=3);
}
