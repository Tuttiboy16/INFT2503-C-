#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Set {
public:
  vector<int> integers;
  
  Set();
  Set(vector<int> integersIn);
  Set(vector<int> integersIn, vector<int> integersIn2);
  void operator+(int integerIn);
  Set &operator=(const Set &other);
  string print();
};

ostream &operator<<(ostream &out, const Set &set);


