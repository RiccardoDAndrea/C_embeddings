#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
  



int main() {
  cout << "Vokabeltrainer \n";
  cout << "Bitte treffe eine Auswahl: \n";
  cout << "(1) Neue Vokabel hinzufuegen \n";
  cout << "(2) Vokabeltest starten \n";
  string name;
  getline(cin,name);
  cout << "Deine Auswahl " + name;
   

  return 0;  // Hauptfunktion korrekt abschließen
    
}




