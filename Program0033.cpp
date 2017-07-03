Ques:
Consider a class named Base having its data members as name and its roll number.A another class named Internal inherits this class in public mode and having its data members as 4 subject marks as internal.Their is an independent class named External having external marks of 4 subjects.The last class named Complete_Info being derived from External and Internal, calculates the total of internal marks obtained by student as well as sum of external marks and grand total. Generate a code to display the name ,roll_no,sum of internal marks,sum of external marks, grand total and Grade of student. Grade can be calculated using following criteria.

CODE:

#include < iostream >
using namespace std;
class Base {
public:
        char *name;
        int roll;
        void get();
};

class Internal: public Base {
public:
        int M1, M2,M3,M4;
        void getIMarks();
};

class External {
public:
        int E1, E2,E3,E4;
        void getEMarks();
};

void Base::get() {
        name = new char[40];
        cin.getline(name, 40);
        cin >> roll;
}
void Internal::getIMarks() {
        cin >> M1 >> M2 >> M3 >> M4;
}
void External::getEMarks() {
        cin >> E1 >> E2 >> E3 >> E4;
}

class Complete_Info: public Internal, public External {
public:
        void Display() {
                int total_internal = M1 + M2 + M3 + M4;
                int total_external = E1 + E2 + E3 + E4;
                int total_marks = total_internal + total_external;
                char grade;
                if(total_marks > 80) {
                        grade = 'A';
                } 
                else if (total_marks > 60) {
                        grade = 'B';
                } 
                else if (total_marks > 40) {
                        grade = 'C';
                } 
                else {
                        grade = 'R';
                }
                cout << name << " ";
                cout << roll << " ";
                cout << total_internal << " ";
                cout << total_external << " ";
                cout << total_marks << " ";
                cout << grade;
}

int main(void) {
        Complete_Info c;
        c.get();
        c.getIMarks();
        c.getEMarks();
        c.Display();
        return 0;
}
