#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Welcome to the game Faith \n";
    cout << "If you want to proceed enter your age \n";
    cout << "Age: ";

    int age;
    cin >> age;
    
    if (age > 18){
        cout << "Oh great, you are old enough \n";
        cout << "Do you want to play a game?\n(y)es or (n)o: ";
        string answer_possibilites1;
        cin >> answer_possibilites1;
        if(answer_possibilites1 == "y" || answer_possibilites1 == "yes"){
            cout << "That's great! Let's start the game.\n";
            cout << "You are entering a new Village. In front of you you see a house.";
            cout << "Do you want to enter the house \n(y)es or (n)o ";
            
            //second question 
            string answer_possibilites2;
            cin >>  answer_possibilites2;
            if(answer_possibilites2 == "y" || answer_possibilites2 == "yes"){
                cout << "After you entered the house you hear noises upstairs. But the noises are very quiet";
                cout << "You notice you can go upstairs or you visit firstly the basement | (u)pstairs or (b)asement";
            }
            else{
                cout << "you notice a strange figure in the center of a village. That is waveing to you do you wont to go to the strange figure";
                cout << "(y)es or (n)o";

            }

            
        }
        

        else {
            cout << "Too bad maybe another time";
        }
    }    
    else {
       cout << "Well it looks like you are not over 18 \n";
    }
}