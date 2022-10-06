#include "set.hpp"
#include <algorithm>


using namespace std;

// Lager enten en ny mengde som ikke har noen elementer, eller med elementer man gir til konstruktøren
Set::Set(vector<int> integersIn) {
  integers = integersIn;
}

// lager en ny mengde som er unionen av to vectorer
Set::Set(vector<int> integersIn, vector<int> integersIn2) {
  vector<int> tmp;
  
  for(size_t i = 0; i < integersIn.size(); i++) {
    tmp.emplace_back(integersIn.at(i));
  }
  
  for(size_t i = 0; i < integersIn2.size(); i++) {
    if(!count(tmp.cbegin(), tmp.cend(), integersIn2.at(i))) {
      tmp.emplace_back(integersIn2.at(i));
    }
  }
}

// Legger inn et nytt heltall dersom det ikke fins i mengden fra før
/*bool Set::addInt(int integerIn) {
  if(!count(integers.cbegin(), integers.cend(), integerIn)) {
    integers.emplace_back(integerIn);
    return true;
  }
  return false;
}*/

void Set::operator+(int integerIn) {
  if(!count(integers.cbegin(), integers.cend(), integerIn)) {
    integers.emplace_back(integerIn);
  }
}

Set &Set::operator=(const Set &other) {
  (*this).integers = other.integers;
  return *this;
}

ostream &operator<<(ostream &out, const Set &set) {
  for(size_t i = 0; i < set.integers.size(); i++) {
    out << set.integers.at(i);
  }
  return out;
}
