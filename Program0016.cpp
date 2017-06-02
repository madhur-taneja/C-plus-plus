Ques:
A class bill is inherited by two classes cheque, cash in protected mode. bill class has two members item_price,qty. The product of the two, 1. price of the i tem and 2. quantity will give us the total bill. class cheque again has two members cheque_no, cheque_amt . Write a member function to test whether the amount in the cheque clears the bill or not. if yes put the word "Clear" if no put the balance amount as "Balance=100" (100 is an example). Similarly class cash has 4 data members for the number of notes of 500,100,10,1. Total is to be calculated from the notes and again matched with the bill . If the bill is cleared with cash put the word "Clear" if no put the balance amount as "Balance=100" (100 is an example). 

CODE:

#include <iostream> 
#include <string.h>

using namespace std;

class bill 
{
    protected: int item_price, qty, bill;
    public: void get_bill();
}; 
void bill::get_bill() 
{ 
    cin >> item_price >> qty; 
    bill = item_price * qty;
}
class cheque: protected bill 
{ 
    int cheq_amt; 
    int cheq_no; 
    public:  void get_cheque_details() {   
            get_bill();   
            cin >> cheq_no >> cheq_amt; 
    }  
    void display() {   
            cout << bill << endl;   
            if (bill <= cheq_amt) {     
                    cout << "Clear" << endl;   
            } 
            else {     
                  cout << "Balance=" << bill - cheq_amt;   
            } 
    }
};

class cash: protected bill 
{ 
    int n500; 
    int n100; 
    int n10; 
    int n1; 
    int total; 
public:  
    void get_cash() 
    {   
           get_bill();   
           total = 0;   
           cin >> n500 >> n100 >> n10 >> n1;   
           total += (n500 * 500);   
           total += (n100 * 100);   
           total += (n10 * 10);   
           total += (n1 * 1); 
    }  
    void display() 
    {   
            cout << bill << endl;   
            if (bill <= total) {     
                 cout << "Clear" << endl;   
            } 
            else {     
                 cout << "Balance=" << bill - total << endl;   
            } 
    }
};

int main() 
{
    int n;
    cin >> n;
    if (n == 1) {
        cheque c;
        c.get_cheque_details();
        c.display();
        } 
    else {
         cash d;
         d.get_cash();
         d.display();
    }
    return 0;
}
