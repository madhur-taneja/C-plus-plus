Ques:
Create a class arradd which has an integer array as a data member. Overload the + operator to add two arradd type objects and the result of addition should be stored in the third object. Note: size of both the arrays is same and determined at run-time. 

CODE:

#include <iostream>
using namespace std;
int size;
class arradd {
        int *arr;
public:
        arradd() {
                arr = new int[size];
        }
        void getdata() {
                for(int i = 0; i < size; i++) {
                        cin >> arr[i];
                }
        }
        void putdata() {
                for(int i = 0; i < size; i++) {
                        cout << arr[i] << " ";
                }
        }
        arradd operator+(arradd& a) {
                arradd z;
                for(int i =0; i < size; i++) {
                        z.arr[i] = arr[i] + a.arr[i];
                }
                return z;
        }
};

int main() {
        cin>>size;
        arradd A1,A2,A3;
        A1.getdata();
        A2.getdata();
        arradd();
        A3 = A1 + A2;
        A3.putdata();
        return 0;
}
