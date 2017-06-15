Ques:
An application that maintains the record of student details along with their attendance and marks (one subject) for all the students in a class. The application also answers the student queries related to marks and attendance. For example if the student wants to know his attendance or marks in the course, he enters his RollNo. and the details of the student are displayed along with the required data. Write a C++ program for the application.

CODE:

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
charch='y';
intnum;
intvar;
cout<<"Enter Number Of Students : ";
cin>>num;
int* student=new int[num-1];
int* marks=new int[num-1];
int* attendance=new int[num-1];
for(int i=0;i<num;i++)
{
marks[i]=0;
attendance[i]=0;
}
for(int i=0;i<num;i++)
{
cout<<"Enter Marks Of "<<i+1<<" Student : ";
cin>>marks[i];
cout<<"Enter Attendance Of "<<i+1<<" Student : ";
cin>>attendance[i];
}
while (ch=='y'||ch=='Y')
{
cout<<"Choose One : ";
cout<<"\n1. Check Marks/Attendance\n2. Exit \n";
cout<<"Your Choice : ";
cin>>var;
if(var==1)
{
int roll;
cout<<"Enter Roll Number : ";
cin>>roll;
cout<<"Marks : "<<marks[roll-1]<<"\n";
cout<<"Attendance : "<<attendance[roll-1];
}
if(var==2)
ch='n';
cout<<"\n Do You Wish To Continue? (Y or N) : ";
cin>>ch;
}
}
