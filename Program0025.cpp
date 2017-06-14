Ques:
Write C++ program to Find the Number of Lines in a Text File.

CODE:

#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
ifstream fin;
fin.open("abc.txt", ios::in);
charmy_character ;
intnumber_of_lines = 0;
while (!fin.eof() )
 {
fin.get(my_character);
if (my_character == '.')
{
number_of_lines++;
}
}
cout<< "NUMBER OF LINES: " <<number_of_lines<<endl;
return 0;
}
