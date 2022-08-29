#include <iostream>

using namespace std;

int main() {
  const int length = 5;

  double temp_1;
  double temp_2;
  double temp_3;
  double temp_4;
  double temp_5;

  int under_10 = 0;
  int between_10_and_20 = 0;
  int over_20 = 0;

  cout << "Du skal skrive inn " << length << " temperaturer.\n";

  cout << "Temperatur nr 1: ";
  cin >> temp_1;

  cout << "Temperatur nr 2: ";
  cin >> temp_2;

  cout << "Temperatur nr 3: ";
  cin >> temp_3;

  cout << "Temperatur nr 4: ";
  cin >> temp_4;

  cout << "Temperatur nr 5: ";
  cin >> temp_5;

  if (temp_1 > 20) {
    ++over_20;
  } else if (temp_1 < 10) {
    ++under_10;
  } else {
    ++between_10_and_20;
  }

  if (temp_2 > 20) {
    ++over_20;
  } else if (temp_2 < 10) {
    ++under_10;
  } else {
    ++between_10_and_20;
  }

  if (temp_3 > 20) {
    ++over_20;
  } else if (temp_3 < 10) {
    ++under_10;
  } else {
    ++between_10_and_20;
  }

  if (temp_4 > 20) {
    ++over_20;
  } else if (temp_4 < 10) {
    ++under_10;
  } else {
    ++between_10_and_20;
  }

  if (temp_5 > 20) {
    ++over_20;
  } else if (temp_5 < 10) {
    ++under_10;
  } else {
    ++between_10_and_20;
  }

  cout << "Antall under 10 er " << under_10 << endl;
  cout << "Antall mellom 10 og 20 er " << between_10_and_20 << endl;
  cout << "Antall over 20 er " << over_20 << endl;
}
