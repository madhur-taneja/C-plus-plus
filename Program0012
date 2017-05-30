Ques:
A company pays its employees weekly. The are of employees three types: Salaried employees are paid a fixed weekly salary regardless of the number of hours worked,commission employees are paid a percentage of their sales and base-salary plus commission employees receive a base salary plus a percentage of their sales. For the current pay period,the company has decided to reward base-salary-plus commission employees by adding 10 per cent to their base salaries. The company wants to implement a C++ program that performs its payroll calculations polymorphically.

CODE:
#include<iostream>
using namespace std;
class Salaried
{
	protected:
		float sal;
	public:
		void get()
		{
			cout<<"Enter fixed weekly salary "<<endl;
			cin>>sal;
		}
};
class commission
{
	protected:
		float percent;
	public:
		void get()
		{
			cout<<"Enter percentage of salary got "<<endl;
			cin>>percent;
		}
};
class baseSalaryPlusCommission:public Salaried,public commission
{
	protected:
		float reward;
	public:
		void total()
		{
			reward=0.1*sal;
			cout<<"Total Salary employees got ======"<<reward+percent+sal;
		}
};
int main()
{
	baseSalaryPlusCommission b;
	b.Salaried::get();
	b.commission::get();
	b.total();
}
