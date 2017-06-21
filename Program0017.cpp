Ques:
Write a program to calculate total result of a student by adding marks in two subjects and sports marks using classes Student,Sports,Test and Result.For wrong values print "Wrong Input".

CODE:

#include <iostream>
#include <string.h>

using namespace std;

class Sports;
class Test;
class Result;
class Student {
public:

    void get_num(int);
    void put_num();
    int roll;
};

void Student::get_num(int i)
{
    roll = i;
}
void Student::put_num()
{
    cout << "Roll number" << roll << endl;
}

class Sports
{
public:
    int sportsMarks;
    void get_score(int a)
    {
        sportsMarks = a;
    }
};
class Test
{
public:
    int marks1, marks2;
    void get_mks(int a, int b)
    {
        marks1 = a;
        marks2 = b;
    }
};

class Result : public Student, public Sports, public Test
{
    int total;
public:
    void display()
    {
        put_num();
        total = marks1 + marks2 + sportsMarks;
        cout << "Marks in sub1 " << marks1 << endl;
        cout << "Marks in sub2 " << marks2 << endl;
        cout << "Score " << sportsMarks << endl;
        cout << "total = " << total << endl;
    }
};

int main()
{
    int r, sc, s1, s2;
    cin >> r >> s1 >> s2 >> sc;
    if (r <= 0 || sc <= 0 || s1 <= 0 || s2 <= 0)
    {
        cout << "Wrong Input" << endl;
        return 0;
    }

    Result obj;
    obj.get_num(r);
    obj.Sports::get_score(sc);
    obj.Test::get_mks(s1, s2);
    obj.display();
}
