Ques:
There is a class named Complex_Numbers, having its private Data Members as real & imag. TWO different Objects store their real and Imaginary Values in it. You are requested to display the sum of real & imaginary values.

CODE:

#include <iostream>
#include <algorithm>

using namespace std;
class COMPLEX_NUMBER
{
	float real,imag;
	public:
	void get(float r, float i){
		real = r;
		imag = i;
	}
	
	void display(){
		cout << real << "+j" << imag << endl; 
	}
	
	COMPLEX_NUMBER add(COMPLEX_NUMBER c1){
		COMPLEX_NUMBER res;
		res.real = real + c1.real;
		res.imag = imag + c1.imag;
		return res;
	}
	
};

int main() {
    float a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    COMPLEX_NUMBER p1,p2,p3;
    p1.get(a,b);//INPUTTING VALUES 
    p2.get(c,d);
    p3=p1.add(p2);
    p3.display();//TO DISPLAY FINAL RESULT
    return 0;
}
