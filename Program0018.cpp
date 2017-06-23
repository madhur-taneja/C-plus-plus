Ques:
Write a program to enter basic information(name,empId,gender) and department information(dept name,assigned work,timetaken) for an employee and print the entire information using classes basicInfo, deptInfo  and employee classes.For Wrong values print "Wrong Input". 

CODE:

#include <iostream>
#include <string.h>

using namespace std;

class basicInfo 
{
protected:
        char *name;
        int empId;
        char gender;
public:
        basicInfo(char *n,int e,char g);
};

class deptInfo 
{
protected:
        char    *deptName;
        char    *assignedWork;
        int     time2complete;
public:
        deptInfo(char *n,char *a,int t);
};

basicInfo::basicInfo(char *n, int e, char g) 
{
       name = new char[strlen(n) + 1];
       strcpy(name, n);
       empId = e;
       gender = g;
}
deptInfo::deptInfo(char* n, char* a, int t) 
{
       deptName = new char[strlen(n) + 1];
       assignedWork = new char[strlen(a) + 1];
       strcpy(deptName, n);
       strcpy(assignedWork, a);
       time2complete = t;
}
class Employee: public basicInfo, public deptInfo 
{
public:
        Employee(char* eName, int eId, char gender, char* deptName, char* aWorked, int time):basicInfo(eName, eId, gender), deptInfo(deptName, aWorked, time) 
                {
                         
        }        
        void printEmployeeInfo() 
                {
                cout << name << endl;
                cout << empId << endl;
                cout << gender << endl;
                cout << deptName << endl;
                cout << assignedWork << endl;
                cout << time2complete / 10.0 << endl;
        }
};

int main() {
        char eName[40];
        char deptName[40];
        char assignedWork[40];
        int empId;
        char gender;
        int time;
        cin.getline(eName, 40);
        cin >> empId >> gender;
        cin.ignore();
        cin.getline(deptName, 40);
        cin.getline(assignedWork, 40);
        cin >> time;
        if(time <= 0) 
                {
                cout << "Wrong Input" << endl;
                return 0;
        }    
        Employee* emp = new Employee(eName, empId, gender, deptName, assignedWork, time);
        emp->printEmployeeInfo();
        return 0;
}
