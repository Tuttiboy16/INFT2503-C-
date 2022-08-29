#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> numbers = {0, 1, 2, 3, 4, 5};

  cout << numbers.front() << endl;
  cout << numbers.back() << endl;

  numbers.emplace(numbers.begin() + 1, 6);

  cout << numbers.front() << endl;
  cout << endl;

  auto num = find(numbers.begin(), numbers.end(), 4);

  if (num != numbers.end()) {
    cout << "Den søkte verdien var " << *num << endl;
  } else {
    cout << "Fant dessverre ikke verdien" << endl;
  }
}
