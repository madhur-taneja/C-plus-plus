Ques:
Write a program to calculate area of Square and Circle using classes Shape,Square and Circle.

CODE:

#include <iostream.h>
#include <string.h>

using namespace std;

class Shape
{
protected:
float l;

public:
void getData();
virtual float calculateArea() = 0;
};

void Shape::getData()
{
cin >> l;
}

class Square: public Shape
{
public:
Square()
{
getData();
}

float calculateArea()
{
return l * l;
}

};

class Circle: public Shape
{
public:
Circle()
{
getData();
}

float calculateArea(){

return 3.14 * l * l;

}

};

int main()
{
Square* o = new Square();
Circle* o1 = new Circle();

cout<<"Area of square: " << o->calculateArea();
cout << "\nArea of circle: " << o1->calculateArea(); //o and o1 are pointer of Shape class

return 0;
}
