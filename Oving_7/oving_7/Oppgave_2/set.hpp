#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Set {
public:
  vector<int> integers = {5, 23, 6, 12, 7, 8, 2, 1, 6, 3, 65};
  
  Set();
  Set(vector<int> integersIn);
  Set(vector<int> integersIn, vector<int> integersIn2);
  void operator+(int integerIn);
  Set &operator=(const Set &other);
  string print();
};

ostream &operator<<(ostream &out, const Set &set);


