#include <iostream>
#include <string>

using namespace std;

int main() {

  // Oppgave 4 a
  string word1, word2, word3;

  cout << "Skriv første ord: ";
  cin >> word1;

  cout << "Skriv 2. ordet: ";
  cin >> word2;

  cout << "Skriv 3. ordet: ";
  cin >> word3;

  // Oppgave 4 b
  string sentence;
  sentence = sentence.append(word1).append(" ").append(word2).append(" ").append(word3).append(".");
  cout << sentence << endl;

  // Oppgave 4 c
  cout << "Lengden av ord 1 er " << word1.length() << endl;
  cout << "Lengden av ord 2 er " << word2.length() << endl;
  cout << "Lengden av ord 3 er " << word3.length() << endl;
  cout << "Lengden av setningen er " << sentence.length() << endl;

  // Oppgave 4 d
  string sentence2 = sentence;

  // Oppgave 4 e
  if (sentence2.length() < 10) {
    cout << "Setningen er for kort" << endl;
  } else {
    if (sentence2.length() < 12) {
      cout << "Setningen er for kort" << endl;
    } else {
      sentence2.replace(9, 3, "xxx");
      cout << "Original setning: " << sentence << endl;
      cout << "Kopi: " << sentence2 << endl;
    }
  }

  // Oppgave 4 f
  /*
   * Unødvendig mye kode i denne deloppgaven fordi kravene tidligere gjør
   * at det er umulig å få et ord som er mindre enn 6 i lengde.
   * 
   * */
  if (sentence.length() < 5) {
    cout << "Setningen er for kort" << endl;
  } else {
    string sentence_start = sentence.substr(5);
    cout << "sentence: " << sentence << endl;
    cout << "sentence_start: " << sentence_start << endl;
  }

  // Oppgave 4 g
  cout << "Inneholder sentence ordet 'hallo'? Svar: " << (sentence.find("hallo") != string::npos ? "Ja" : "Nei") << endl;

  // Oppgave 4 h
  int occurences = 0;
  string sub = "er";

  for (size_t offset = sentence.find(sub); offset != std::string::npos;
       offset = sentence.find(sub, offset + sub.length())) {
    ++occurences;
  }

  cout << "Antall forekomster av ordet 'er' i sentence er " << occurences << endl;
}
