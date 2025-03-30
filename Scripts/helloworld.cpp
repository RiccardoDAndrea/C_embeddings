#include <iostream>
#include <string>

// Basics of C++ Variablen Typen 
// Difference between float and double 
// float: 4 bytes, double: 8 bytes
// float: 7 decimal digits, double: 15 decimal digits
// float: 3.56f, 3e5f, double: 3.56, 3e5

// What kind of data types are there in C++?
// int, float, double, char, string
// int is a integer, 
// float is a floating point number, 
// double is a double precision floating point number, 
// char is a character, string is a string of characters

// Examples
// int myNum = 5;               // Integer (whole number without decimals)
// double myFloatNum = 5.99;    // Floating point number (with decimals)
// char myLetter = 'D';         // Character
// string myText = "Hello";     // String (text)
// bool myBoolean = true;       // Boolean (true or false)




int main() {
    
    std::string FirstName = "Riccardo";
    std::string Lastname = "Müller";
    int alter = 15;
    float Gehalt = 20444.32;
    double Stundenanzahl = 27.61;
    char Tarifgruppe = 'B';
    int x = 5, y = 6, z = 50;
    int increment = 1;
    
    std::cout << "Willkommen Herr " << FirstName << " " << Lastname << "!\n";
    std::cout << "Dein alter betragt: " << alter << "\n";
    std::cout << "Mit einem Gehalt von: " << Gehalt << "$\n";
    std::cout << "Dein salary betragt: " << Stundenanzahl << "$\n";
    std::cout << "Dein salary betragt level ist: " << Tarifgruppe << "\n";
    std::cout << "Die Komplexität ist: " << x + y + z << "\n";
    std::cout << "Increment +1: " << ++increment<< "\n";
    return 0;
}
