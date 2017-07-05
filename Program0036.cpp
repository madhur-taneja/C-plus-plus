Ques:
We want to use class Result that has be en derived from student class in protected mode. The base class (student) will contain the information: roll no an d course of student. The derived class(result) contains the marks of three subjects a nd calculate the total of marks(sum of all the three subjects) 

CODE:

#include < iostream >
using namespace std;
class student {
        int roll_no;
protected:
        char course[10];
public:
        student(int rno,char *c) {
                roll_no=rno;
                strcpy(course, c);
        }
        void show_rno();
}; 

class result: protected student {
        int m1, m2, m3;
public:
        result(int rno, char* course, int m1, int m2, int m3):student(rno, course) {
                this->m1 = m1;
                this->m2 = m2;
                this->m3 = m3;
        }
        void display() {
                show_rno();
                cout << m1 + m2 + m3 << endl;
        }
};

void student::show_rno() {
        cout << roll_no << endl;
        cout << course << endl;
}

int main()
{
        int rno,m1,m2,m3;
        char course[10];
        cin>>rno;
        cin.ignore();
        cin.getline(course,10);
        cin>>m1>>m2>>m3;
        result r(rno,course,m1,m2,m3);
        r.display();
        return 0;
}
