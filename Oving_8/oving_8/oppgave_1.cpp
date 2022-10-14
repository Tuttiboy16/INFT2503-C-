#include <cmath>
#include <iostream>

using namespace std;

template <typename Type>
bool equal_test(Type a, Type b);

bool equal_test(double a, double b);

int main() {
  equal_test(4, 4);
  equal_test(4.2224, 4.2223);
}

template <typename Type>
bool equal_test(Type a, Type b) {
  cout << (a == b ? "Equal types!" : "Not equal types!") << endl;
  return a == b;
}

bool equal_test(double a, double b) {
  if (abs(a - b) < 0.00001) {
    cout << "Equal doubles!" << endl;
    return true;
  }

  cout << "Not equal doubles!" << endl;
  return false;
}
