Ques:
Implement a class employee that inherits two classes‐(1) contract and (2) permanent. The base class employee contains the information of employee as: employee ID,name of the employee,designation of the employee. Derived class1 (contract) contains information: no of working hours of employees, no of wages per hour and displays the salary of employee as the product of no of working hours and no of wages per hour Derived class2(permanent) contains information: basic pay, HRA, TA and calculate its DA (10% of the basic salary), and displays the calculated salary(sum of basic,HRA,TA,DA).

CODE:

#include < iostream > 
using namespace std;
class employee {
protected:
        int id;
        char name[20];
        char des[20];
public:
        void get_emp_data();
        void show_emp_data();
};

void employee::get_emp_data() {
        cin >> id;
        cin.ignore();
        cin.getline(name, 20);
        cin.getline(des, 20);
}
void employee::show_emp_data() {
        cout << id << endl;
        cout << name << endl;
        cout << des << endl;
}

class contract: public employee {
        int hours;
        int wages;
public:
        void get_cont_data() {
                get_emp_data();
                cin >> hours >> wages;
        }
        void show_cont_data() {
                show_emp_data();
                cout << hours * wages << endl;
        }
};

class permanent: public employee {
        int basic, HRA, TA, DA;
public:
        void get_per_data() {
                cin >> basic >> HRA >> TA;
        }
        void show_per_data() {
                DA = basic * 0.1;
                cout << basic + basic + HRA + TA + DA << endl;
        }
};

int main() {
        contract c;
        c.get_cont_data();
        permanent p;
        p.get_per_data();
        c.show_cont_data();
        p.show_per_data();
        return 0;
}
