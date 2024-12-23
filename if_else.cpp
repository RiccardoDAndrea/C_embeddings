#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Vokalebtrainer\n";
    cout << "Bitte treffe eine Auswahl\n";
    cout << "(1) Neue Vokabel hinzufuegen\n";
    cout << "(2) Vokabeltest starten\n";
    cout << "(3) Bestanden";
    string option;
    cin >> option;

    if (option == "1") {
        cout << "Welche Vokabel (Deutsch)?";
        string german_word;
        string spanish_word;
        cin >> german_word;
        cout << "Wie lautet die Uebersetzung?";
        cin >> spanish_word;
        cout << german_word + "lautet auf Spanisch" +
          spanish_word;


        } else {
          cout << "Vokabeltest wird gestartet...";
        }
}
