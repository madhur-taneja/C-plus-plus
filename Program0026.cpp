Ques:
Write C++ program to Append the Content of File at the end of Another.

CODE:

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin;
fin.open("abc.txt");
ofstreamoutfile;
outfile.open("abc2.txt", std::ios_base::app);
charmy_character;
while (!fin.eof() )
 {
fin.get(my_character);
if (my_character != '\0')
{
outfile<<my_character;
}
} 
return 0;
}
