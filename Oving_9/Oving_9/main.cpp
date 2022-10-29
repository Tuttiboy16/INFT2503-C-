#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
  vector<int> v2 = {2, 3, 12, 14, 24};

  // Oppgave a
  auto el = find_if(v1.begin(), v1.end(), [](int x) {
    return x > 15 ? true : false;
  });

  cout << *el.base() << endl;

  // Oppgave b
  bool eq = equal(v1.begin(), v1.begin() + 5, v2.begin(), [](int x, int y) {
    return abs(x - y) < 2;
  });

  bool eq2 = equal(v1.begin(), v1.begin() + 4, v2.begin(), [](int x, int y) {
    return abs(x - y) < 2;
  });

  if (eq) {
    cout << "Equal!" << endl;
  } else {
    cout << "Not equal!" << endl;
  }

  if (eq2) {
    cout << "Equal!" << endl;
  } else {
    cout << "Not equal!" << endl;
  }

  // Oppgave c
  vector<int> result(v1.size());

  replace_copy_if(
      v1.begin(), v1.end(), result.begin(), [](int x) { return x % 2 == 1; }, 100);

  for (auto x : result) {
    cout << x << endl;
  }
}
