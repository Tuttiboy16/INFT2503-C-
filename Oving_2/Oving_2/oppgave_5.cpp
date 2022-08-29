#include <iostream>

using namespace std;

int main() {
  double number;
  double *number_pointer = &number;
  double &number_ref = number;

  cout << number << endl;

  // Måte nr. 1 (bruke pointer)
  *number_pointer = 10;
  cout << number << endl;

  // Måte nr. 2 (bruke referansen)
  number_ref = 20;
  cout << number << endl;

  // Måte nr. 3 (bruke variabelen selv)
  number = 30;
  cout << number << endl;
}
