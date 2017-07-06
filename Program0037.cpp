Ques:
Create 2 arrays of size 4 and initialize 2 list containers using the values of the arrays respectively, sort teach list in ascending order , merge both lists in a list 1 and then display the resultant list 1 in reverse order. Also display the maximum and minimum element in the list.

CODE:

#include <algorithm>
#include <iostream>
using namespace std;

bool comp(int a, int b) {
        return a < b;
}

int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
list<int> list1;
list<int> list2;
list<int>::iterator itr;

for(int i = 0; i < 4; i++) {
        int a;
        cin >> a;
        list1.push_back(a);
}

for(int i = 0; i < 4; i++) {
        int a;
        cin >> a;
        list2.push_back(a);
}
list1.sort(comp);
list2.sort(comp);
list1.merge(list2);
list1.reverse();
for(itr = list1.begin(); itr != list1.end(); itr++) {
        cout << *itr << " ";
}
cout << endl;
itr = list1.end();
itr--;
cout << *itr << endl;
itr = list1.begin();
cout << *itr << endl;
return 0;
}
