#include <fstream>
#include <iostream>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
  int length = 7;
  double temperatures[length];

  read_temperatures(temperatures, length);
}

void read_temperatures(double temperatures[], int length) {
  const char filename[] = "temperatures.dat";
  ifstream infile;
  infile.open(filename);

  if (!infile) {
    cout << "Feil ved åpning av fil." << endl;
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < length; ++i) {
    infile >> temperatures[i];

    if (infile.eof()) {
      infile.close();
      break;
    }

    cout << "Temperatur nr " << i << ": " << temperatures[i] << endl;
  }

  int under_10 = 0;
  int between_10_and_20 = 0;
  int over_20 = 0;

  for (int i = 0; i < length; ++i) {
    if (temperatures[i] < 10) {
      ++under_10;
    } else if (temperatures[i] > 20) {
      ++over_20;
    } else {
      ++between_10_and_20;
    }
  }

  cout << "Antall under 10 er " << under_10 << endl;
  cout << "Antall mellom 10 og 20 er " << between_10_and_20 << endl;
  cout << "Antall over 20 er " << over_20 << endl;
}
