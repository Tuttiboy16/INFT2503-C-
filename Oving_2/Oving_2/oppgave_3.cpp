#include <iostream>

using namespace std;

int main() {
  char text[5];
  char *pointer = text;
  char search_for = 'e';

  /*
   * Dersom teksten som blir skrevet inn er lenger enn 5,
   * kan det potensielt prøve og overskrive data som er ved siden av tabellen text[].
   *
   * Får "Segmentation fault", som er en feil programmet gir dersom det prøver å få
   * tilgang til minne det ikke har tilgang til.
   * */
  cin >> text;

  while (*pointer != search_for) {
    cout << "Here: " << *pointer << endl;

    /*
     * Når programmet kommer til dette punktet vil teksten som brukeren skrev inn
     * bli overskrevet av innholdet til variabelen "search_for"
     *  
     * */
    *pointer = search_for; //

    pointer++;
  }

  cout << text << endl;
}
