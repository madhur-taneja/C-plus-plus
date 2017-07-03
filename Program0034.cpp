Ques:
In a multiple Inheritance Problem, Base class1(one) contains the information of ﬁrst number and Base class2(two) contains the information of second number.  Derived Class(last) inherited from both the base cla sses(one and two) gives the product of the ﬁrst number and the second number. 

CODE:

#include < iostream >
using namespace std;
class one {
protected: 
        int m;
public:
        void get_m();
};

void one::get_m() {
        cin >> m; 
}

class two {
protected:
        int n;
public:
        void get_n() {
                cin >> n;
        }
};

class last: public one, public two {
public:
        void display() {
                cout << m << endl;
                cout << n << endl;
                cout << m * n << endl;
        }
}; 

int main() {
        last l;
        l.get_m();
        l.get_n();
        l.display();
        return 0;
}
