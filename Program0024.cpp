Ques:
Use the copy () algorithm to copy sequences within a container. However, you must be careful when the destination sequence overlaps the source sequence write a program that lets you copy any sequence to a different location within an array ,using copy(). Have the user enter values for first1, last1 and first2.use the program to verify that you can shift a sequence that overlaps its destination to the left, but not to the right. (For example, you can shift several items from 10 to 9, but not from 10 to 11) this is because copy() starts with the leftmost element 

CODE:

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; ++i) 
   {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    
    int first1, last1, first2;
    cout << "Enter first1, last1 and first2: ";
    cin >> first1 >> last1 >> first2;
    
    if (first2 > first1 || first2 > last1)
    {
        cout << "Error! Can\'t shift to the right!" << endl;
        exit(0);
    }
    vector<int>::iterator f1 = vec.begin() + first1;
    vector<int>::iterator l1 = vec.begin() + last1;
    vector<int>::iterator f2 = vec.begin() + first2;

    copy(f1, l1, f2);
    
    cout << "After copy()" << endl;
    
    for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
    {
   	     cout << *itr << " ";
    }
    cout << endl;
}
