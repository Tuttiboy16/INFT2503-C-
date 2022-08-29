

int main() {
  int a = 5;
  int b; // Før: int &b; kan ikke deklarere en referanse uten at den blir initiert
  int *c;
  c = &b;
  a = b + *c; // Før: *a = *b + *c; kan ikke skrive *a siden a ikke er deklarert som en peker; kan ikke skrive *b siden b ikke er deklarert som en peker
  b = 2;      // Før: &b = 2; kan ikke bruke & på venstre side av =
}
