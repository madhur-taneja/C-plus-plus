Ques:
Deﬁne a class Customer with the following speciﬁcations. Protected Members : Customer_no integer Customer_name char (20) Qty integer Price , Discount, Netprice ﬂoat Member Functions: Public members: * A fu nction Input( ) – to read data members(Customer_no, Customer_name, Quantity and Price) create Another class Seller has member fu nction Caldiscount(). * Caldiscount ( ) – To calculate Discount according to TotalPrice and NetPrice TotalPrice = Price*Qty. Netprice= TotalPrice-Discount Show( ) – to display Customer details.

CODE:

#include < iostream >
using namespace std;
class customer {
protected:
        int c_no;
        char name[20];
        int qty;
        int price;
        float discount;
        float net_price;
public:
        void input();
}; 

class seller :public customer {
public:    
        float total_price;
        void caldiscount();
        void show(); 
};

void customer::input() {
        cin >> c_no;
        cin.ignore();
        cin.getline(name, 20);
        cin >> qty;
        cin >> price;
}

void seller::caldiscount() {
        input();
        total_price = qty * price;
        if(total_price >= 50000) {
                discount = total_price / 4;
        } 
        else if (total_price >= 25000) {
                discount = total_price * 15 / 100;
        } 
        else {
                discount  = total_price / 10;
        }    net_price = total_price - discount;
}

void seller::show() {
        cout << c_no << endl;
        cout << name << endl;
        cout << qty << endl;
        cout << price << endl;
        cout << total_price << endl;
        cout << discount << endl;
        cout << net_price << endl;
}

int main() {
        seller ob;
        ob.caldiscount();
        ob.show();
        return 0;
}
