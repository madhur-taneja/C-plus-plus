Ques:
Start with a list of int values. use two normal (not reverse) iterators ,one moving forward through the list and one moving backward ,in a while loop, to reverse  the contents of the list. you can use the swap() algorithm to save a few statements.(make sure your solution works for both even and odd number of items).

CODE:

#include <iostream>
#include <list>
#include <algorithm>

using namespace std; 

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    list<int> l;
    cout << "Enter the integer elements: ";
    int a;
    for (int i = 0; i < n; ++i) 
{
        cin >> a;
        l.push_back(a);
 }
    
    list<int>::iterator i1 = l.begin();
    list<int>::iterator i2 = l.end();
    i2--;

    a = 0;
    while (a <= n / 2)
    {
        swap(*i1, *i2);
        i1++;
        i2--;
        a++;
    }

    for (list<int>::iterator itr = l.begin(); itr != l.end(); itr++) 
    {		
  cout << *itr << " ";
    }
}
