Ques:
Write a program to calculate the age of a person and height in cms when year of birth and height in meters is known. 

CODE:

#include<iostream>
#include<string.h>
using namespace std;
class person_data
{
	char name[100];
	int year;
	int cyear;
	float heightm;
	int age;
	float heightcm;
	public:
		person_data(const char*,int,float);
		void cal_age(int);
		void cal_ht_cms();
		void show();
};
person_data::person_data(const char *n,int y,float h)
{
	strcpy(name,n);
	year=y;
	heightm=h;
}
void person_data::cal_age(int c)
{
	cyear=c;
	age=cyear-year;
}
void person_data::cal_ht_cms()
{
	heightcm=heightm*100;
}
void person_data::show()
{
	cout<<"Approximate age of a person: "<<age<<endl;
	cout<<"Height in cms: "<<heightcm;
}
int main()
{
person_data p1("Ram",1975,1.05);
p1.cal_age(2016);
p1.cal_ht_cms();
p1.show();
return 0;
}
