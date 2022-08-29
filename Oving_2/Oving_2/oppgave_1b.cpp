#include <iostream>

using namespace std;

int main() {
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  *p = 7;
  *q += 4;
  *q = *p + 1;
  p = q;

  cout << "Adressen til i er " << &i << " og innholdet er " << i << endl;
  cout << "Adressen til j er " << &j << " og innholdet er " << j << endl;
  cout << "Adressen til *p er " << &p << " og innholdet er " << p << endl;
  cout << "Adressen til *q er " << &q << " og innholdet er " << q << endl;

  cout << *p << " " << *q << endl;
}
