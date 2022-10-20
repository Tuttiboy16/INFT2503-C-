<<<<<<< HEAD
#include "set.cpp"
#include <iostream>

int main() {
  Set set1(vector<int> integersIn = {});
  cout << "Set 1: " << set1 << endl;
=======
#include "set.hpp"

using namespace std;

int main() {
  
  // Lage ny tom mengde
  Set set1;
  
  cout << "Set 1: " << set1 << endl;
  
  
  // Finne unionen
  vector<int> vec1 {1, 2, 3, 4, 5};
  vector<int> vec2 {4, 5, 6, 7, 8, 9};
  Set set2(vec1, vec2);
  
  cout << "Set 2: " << set2 << endl;
>>>>>>> 2a66f32f64c657e555b0eca2817f3453fb92b7d3
  
  
  // Legge tall inn i mengde
  vector<int> vec3 {1, 3, 6, 2, 5};
  Set set3(vec3);
  
  cout << "Set 3: " << set3 << endl;
  // Legger inn tall som ikke fins
  set3 + 8;
  cout << "Set 3: " << set3 << endl;
  
  // Legger til tall som fins fra før
  set3 + 5;
  cout << "Set 3: " << set3 << endl;
  
  
  // Setter set 3 lik set 2
  set3 = set2;
  cout << "Set 3: " << set3 << endl;
  
  return 0;
}
