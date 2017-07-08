Ques:
Class Named Example is having two private data members named as A & B. Function outside the class wants to access these private Data Members and finally want to Display the Sum of it.

#include <iostream>
 
using namespace std;
 
class EXAMPLE{
        int A, B;
 public:
	void get(int a, int b){
        	A = a;
		B = b;
	}
	friend void display(EXAMPLE &e);
};
 
void display(EXAMPLE &e){
	cout << e.A + e.B;
}
 
int main() {
	EXAMPLE e;
	int a, b;
	cin >> a >> b;
	e.get(a, b);
	display(e);
	return 0;
}
