#include <iostream>
using namespace std;

int main() {
    int birthyear;
    cout << "Enter an your Birtyear: ";
    cin >> birthyear;  
    
    int adress; 
    cout << "What is your adress: ";
    cin >> adress;

    int ZIPCode; 
    cout << "What is your ZIP Code: ";
    cin >> ZIPCode;
    
    // Ausgabe als printf 
    cout << "\n Your birthyear is: " << birthyear;
    cout << "\n Your adress is: " << adress;
    cout << "\n Your ZIP code ist the follwing: " << ZIPCode; 
    return 0;
}
