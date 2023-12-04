#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string PrintGuess();

int wordLength = 5;

int main() {

    PrintIntro();

    for(int count = 1; count<=wordLength; count++){
        PrintGuess();
        cout<<endl;
    }



    return 0;
}

void PrintIntro(){

    cout<<"Welcome to the game \n";
    cout<<"Can you guess the "<<wordLength << " letter isogram\n";
}

string PrintGuess(){
    string guess;
    // Get a guess from the player
    cout<<"your guess: ";
    getline(cin, guess);
    //repeat the guess back
    cout<< "\n your guess is: " << guess;
    cout << endl;

    return guess;
}