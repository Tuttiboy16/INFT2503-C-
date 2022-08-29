#include <iostream>

using namespace std;

int find_sum(const int *table, int length) {
  int sum = 0;

  for (int i = 0; i < length; ++i) {
    sum += table[i];
  }

  return sum;
}

int main() {
  int table[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int *first_pointer = table;
  int *second_pointer = &table[10];
  int *third_pointer = &table[15];

  cout << "Summen av de 10 første er " << find_sum(first_pointer, 10) << endl;
  cout << "Summen av de 5 neste er " << find_sum(second_pointer, 5) << endl;
  cout << "Summen av de 5 siste er " << find_sum(third_pointer, 5) << endl;
}
