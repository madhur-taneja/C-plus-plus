Ques:
employees of some particular bank want an application interface for performing cash transaction online so they have created an app . Create a class named employee with data members --account_no(long int), balance and member function void get_data() and void display_data().
Class beneficiary has data member- b_acc_no(long int) , b_bal and b_amt. member function of this class are void get_b_data() and void transfer() and void print().
transfer function is used to transfer amount from employee account to beneficiary account . If amount to be transferred is less than employee's balance then print "insufficient balance".

CODE:

#include <iostream.h>

using namespace std;

class emp {
protected:
        long int acc_no;
        long int balance;
public:
        void get_data();
        void display();
};

class beneficiary: public emp {
protected:
        long int b_accno;
        long int b_bal;
        int amt;
public:
        void get_b_data();
        void transfer();
        void print();
};

void emp::display() {
cout << acc_no << endl;
cout << balance << endl;
}

void beneficiary::get_b_data() {
get_data();
cin >> b_accno >> b_bal;
}

void beneficiary::transfer() {
cin >> amt;
if(amt > balance) {
        cout << "insufficient balance" << endl;

} 
else {
        b_bal += amt;
        balance -= amt;
}
}

void beneficiary::print() {
display();
cout << b_accno << endl;
cout << b_bal << endl;
}

int main() {
beneficiary ob;
ob.get_b_data();
ob.transfer();
ob.print();
}
