#include "fraction.hpp"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
  cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
  Fraction a(10, 20);
  Fraction b(3, 4);
  Fraction c;
  c.set(5);
  Fraction d = a / b;

  print("a = ", a);
  print("b = ", b);
  print("c = ", c);
  print("d = ", d);

  b += a;
  ++c;
  d *= d;

  print("b = ", b);
  print("c = ", c);
  print("d = ", d);

  c = a + b - d * a;
  c = -c;

  print("c = ", c);

  if (a + b != c + d)
    cout << "a + b != c + d" << endl;
  else
    cout << " a + b == c + d" << endl;
  while (b > a)
    b -= a;
  print("b = ", b);

  // Oppgave 1a
  print("a - 5 = ", (a - 5));
  print("5 - a = ", (5 - a));
  print("5 - 3 - a - 7 - a = ", (5 - 3 - a - 7 - a));
}

/* Oppgave 1b
 *
 * Utrykket 5 - 3 - fraction1 - 7 - fraction2 blir tolket slik:
 *
 * 1. først blir 5 - 3 tolket. Her blir den vanlige aritmetiske versjonen av '-' brukt.
 * 2. deretter blir fraction1 subtrahert. Her blir funksjonen på linje 42
 *    i fraction.cpp brukt. Denne funksjonen returnerer et Fraction object.
 * 3. neste er at et Fraction objekt skal subtrahere 7. Da brukes funksjonen på linje 55 i fraction.cpp brukt. Denne returnerer også et Fraction objekt.
 * 4. Til slutt blir et Fraction objekt subtrahert med et annet Fraction objekt. Her blir funksjonen på linje 49.
 *
 * */
