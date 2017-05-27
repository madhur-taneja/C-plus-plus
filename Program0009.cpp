Ques:
Write a C++ program to add, subtract and multiply two matrices using operator overloading.

CODE:

#include<iostream>
using namespace std;
class matrix
{
	int row;
	int col;
	int mat[50][50];
	public:
		matrix(){
		};
		matrix(int,int);
		matrix operator+(matrix);
		matrix operator-(matrix);
		matrix operator*(matrix);
		void display();
};
matrix::matrix(int r,int c)
{
	int i,j;
	row=r;
	col=c;
	cout<<"Enter matrix"<<endl;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			cin>>mat[i][j];
		}
	}
}
matrix matrix::operator+(matrix m2)
{
	int i,j;
	matrix m3;
	m3.row=row;
	m3.col=col;
	if(row==m2.row && col==m2.col)
	{
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=col;j++)
				m3.mat[i][j]=mat[i][j]+m2.mat[i][j];
		}
	}
	else
	{
		cout<<"Not possible"<<endl;
	}
	return m3;
}
matrix matrix::operator-(matrix m2)
{
	int i,j;
	matrix m3;
	m3.row=row;
	m3.col=col;
	if(row==m2.row && col==m2.col)
	{
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=col;j++)
				m3.mat[i][j]=mat[i][j]-m2.mat[i][j];
		}
	}
	else
	{
		cout<<"Not possible"<<endl;
	}
	return m3;
}
matrix matrix::operator*(matrix m2)
{
	int i,j,k,sum;
	matrix m3;
	m3.row=row;
	m3.col=m2.col;
	if(row==m2.col && col==m2.row)
	{
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=m2.col;j++)
			{
				sum=0;
				for(k=1;k<=col;k++)
				{
					sum=sum+mat[i][k]*m2.mat[k][j];
				}
				m3.mat[i][j]=sum;
			}
		}
	}
	else
	{
		cout<<"Not possible"<<endl;
	}
	return m3;
}
void matrix::display()
{
	int i,j;
	cout<<"Resultant Matrix ::"<<endl;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
int main()
{
	int choice,r1,c1,r2,c2;
	cout<<"Enter number of rows and columns for 1st matrix"<<endl;
	cin>>r1>>c1;
	matrix m1(r1,c1);
	cout<<"Enter number of rows and columns for 2nd matrix"<<endl;
	cin>>r2>>c2;
	matrix m2(r2,c2),m3;
	do
	{
		cout<<"Enter 1 to add matrices"<<endl;
		cout<<"Enter 2 to subtract matrices"<<endl;
		cout<<"Enter 3 to multiply matrices"<<endl;
		cout<<"Enter 4 to exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				m3=m1+m2;
				m3.display();
				break;
			case 2:
				m3=m1-m2;
				m3.display();
				break;
			case 3:
				m3=m1*m2;
				m3.display();
				break;
		}
	}while(choice!=4);
}
