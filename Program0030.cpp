Ques:
Raj works in two shifts, (Shift1 and Shift2).For both shifts he maintain a  separate list of some size which contains the number of items he sold in one shift. At the end of day he adds  both the lists index wise. ( item1 in list1 will be added to item1 in list2). But the calculator on which he calculated has problem that when addition goes beyond 100 ,the value decremented by 100.Help raj to add two lists. CONSTRAINT : Array elements must be in range from 1 to 100(including 1 and 100) If after addition the value becomes greater than 100, reduce the value by 100.(eg. 116 will result to 16). 

CODE:

#include <iostream>
using namespace std;
int size;
class test  {  
public:  
        long int * arr; 
        friend test operator + (test, test);
        static int n;
        test() { 
        arr = new long int[size]; 
                if (n < size - 1)   
                        for (int i = 0; i < size; i++) {     
                        cin >> arr[i];   
                        } 
                n++;
        }
};

int test::n = 0;
test operator + (test t1, test t2) { 
        test x; 
        for (int i = 0; i < size; i++) {   
                x.arr[i] = t1.arr[i] + t2.arr[i];   
                if (x.arr[i] > 100) {     
                        x.arr[i] -= 100;   
                }   
                cout << x.arr[i] << endl; 
        } 
        return x;
}

int main() { 
        cin >> size; 
        test a1, a2, a3;    
        return 0; 
}
