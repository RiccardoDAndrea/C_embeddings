#include <iostream>
#include <string>
using namespace std;

int main() {
    // cout wird genutzt damit im Terminal eine Output angezeigt wird Charakter Output (cout)
    cout << "Welcome to the game tell me a story \n";
    cout << "Do you want to enter the house? \n";
    cout << "(y)es \n";
    cout << "(n)o";
    //cout << "(3) Bestanden \n";

    string option;      // string datentyp ziechenverkettung
    cin >> option;      // cin steht fur (Charakter input)

    if (option == "y") {
        cout << "You have entered the Hunted House which room do you want to enter? \n";
        cout << "(B)edroom \n";
        cout << "(D)ark room\n";
        cout << "(E)mpty room\n";

        string answer_1;
        cin >> answer_1;

        if (answer_1 == "B"){
            cout << "Bedroom";
        } else if (answer_1 == "D") {
            cout << "You have entered the Dark room\n";
            cout << "You see a myseries looking Chest do you try to open it? \n";
            cout << "(y)es"
            cout << "(n)o"


            string chest_open;
            cint >> chest_open;


        } else if (answer_1 == "E"){

            cout << "Your entering a empty room\n";
            cout << "A Dark figure is looking at you ?\n";
            cout << "Do you want to attack him\n";
            cout << "(y)es\n";
            cout << "(n)o \n";
            string combat;
            cin >> combat;


        };
        } else {
          cout << "Good luck next time";
        };
}
