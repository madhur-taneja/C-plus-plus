Ques:
Base Class name bill has three data members: it em_code, price, total. Class cash is derived from bill having deno, value,  num and cheque is also derived from bill having chec_no,bank_name as data members. The customer is having an option to buy from cheque or cash.

CODE:

#include <iostream>
#include <string.h>

using namespace std;

class bill { 
        int item_code[5]; 
        int price[5]; 
        int total; 
public:  
        static int size; 
        bill(int * it, int * pr) {   
                total = 0;   
                for (int i = 0; i < size; i++) {     
                        item_code[i] = it[i];     
                        price[i] = pr[i];     
                        total += price[i];   
                } 
        } 
        void show() {   
                cout << total << endl; 
        }
};

class cheque: public bill { 
        int chec_no; 
        char name[30]; 
public:  
        cheque(int * item_c, int * price, int c_num, char * n):  bill(item_c, price) {   
                chec_no = c_num;   
                strcpy(name, n); 
        }  
        void show_check() {   
                show();   
                cout << chec_no << endl;   
                cout << name << endl; 
        }
};

class cash: public bill { 
        int n; 
        int * v, * d; 
public:  
        cash(int * item_c, int * price, int * den, int * val, int n):  bill(item_c, price) {   
                this - > n = n;   
                v = new int[n];   
                d = new int[n];   
                for (int i = 0; i < n; i++) {     
                        v[i] = val[i];     
                        d[i] = den[i];   
                } 
        }  
        void show_cash() {   
                show();   
                cout << "notes=" << n << endl;   
                for (int i = 0; i < n; i++) {     
                        cout << d[i] << endl;     
                        cout << v[i] << endl;   
                } 
        } 
};

int bill::size = 0;

int main() { 
        cin >> bill::size; 
        int * c = new int[bill::size]; 
        int * p = new int[bill::size]; 
        for (int i = 0; i < bill::size; i++) {   
                cin >> c[i] >> p[i]; 
        } 
        int option = 0; 
        cin >> option;
        if (option == 1)  {   
                char name[30];   
                int c_num;   
                cin >> c_num;  
                cin.ignore();   
                cin.getline(name, 30);   
                cheque c2(c, p, c_num, name);   
                c2.show_check(); 
        } 
        else  {   
                int num, d[10], v[10]; 
                cin >> num; 
                for (int i = 0; i < num; i++)  {   
                        cin >> d[i] >> v[i]; 
                } 
        cash c1(c, p, d, v, num); 
        c1.show_cash(); 
}
