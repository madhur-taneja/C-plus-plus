Ques:
Given the following inheritance structure of classes that represents the marks of one student in internal and external assessments of 3 subjects respectively and the Result class generates the rand total

CODE:

#include < map >
#include < set >
#include < list >
#include < cmath >
#include < ctime >
#include < deque >
#include < queue >
#include < stack >
#include < string >
#include < bitset >
#include < cstdio>
#include < limits >
#include < vector >
#include < climits >
#include < cstring >
#include < cstdlib >
#include < fstream >
#include < numeric >
#include < sstream >
#include < iostream >
#include < algorithm >
#include < unordered_map > 

using namespace std;

class Internal {
  int iMarks[3];
  int total;
  public: 
  Internal(int imarks[3]) {
    total = 0;
    for (int i = 0; i < 3; i++) {
      iMarks[i] = imarks[i];
      total += iMarks[i];
    }
  }
  int getTotal() {
    return total;
  }
};

class External {
  int eMarks[3];
  int total;
  public: 
  External(int emarks[3]) {
    total = 0;
    for (int i = 0; i < 3; i++) {
      eMarks[i] = emarks[i];
      total += eMarks[i];
    }
  }
  int getTotal() {
    return total;
  }
};

class Result: public Internal, public External {
  public: 
  Result(int iMarks[3], int eMarks[3]): Internal(iMarks),External(eMarks) {
    cout << Internal::getTotal() << endl;
    cout << External::getTotal() << endl;
    cout << Internal::getTotal() + External::getTotal() << endl;
  }
};

int main() {
  int i;
  int imarks[3], emarks[3];
  for (i = 0; i < 3; i++) {
    cin >> imarks[i];
  }
  for (i = 0; i < 3; i++) {
    cin >> emarks[i];
  }
  Result r(imarks, emarks);
  return 0;
}
