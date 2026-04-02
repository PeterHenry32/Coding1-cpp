// Peter Henry Coding 1 Spring 2026
//Switch, random numbers, and while loops. 

// your task..... creat the rest of the code to say "Random Numbers!"
// then run the program.

#include <iostream>
#include <random>     //for random numbers
#include <ctime>    // for seeding the random numbers.

using namespace std;

int main(){
    srand(time(0));         // seed the random number generator with the current time.

    cout << "\n\n\nRandom Numbers!\n\n\n";

    cout << "\n\nOur first random number is\n\n " <<rand() << ".\n";

    cout << "\n\nHere are ten random numbers:\n\n";

int counter = 0;
    while(counter++ <10){
            cout << (rand() % 10) + 1 <<endl;
    }

    // GUESS THE NUMBER GAME
    //  THE COMPUTER PICKS A RANDOM NUMBER BETWEEN 1 AND 10 (inclusive)
    int theNumber = (rand() % 10) + 1;
    // THE COMPUTER ASK THE PLAUYER TO GUESS THAT RANDOM NUMBER
    int guess = -1;
    do{
    // THE PLAYER GUESSES
    cin >> guess;
    // THE COMPUTER EVALUATES WHETHER THE GUESS IS 
        // CORRECT!!
        if(theNumber == guess){
            //CONGRATULATE THE PLAYER, END THE GAME
            cout << "GOOD BOY!\n";
            return 0;
        }
         
        // TOO HIGH
        else if (guess > theNumber){
            // TELL THE PLAYER "TOO HIGH"
            cout << " that guess is too high!\n";
        }
        //TOO LOW
        else if (guess < theNumber){
          //TELL THE PLAYER "TOO lOW
            cout <<"that guess is too low!\n";
        }

    // LET THE PLAYER GUESS AGAIN, IF IT WAS INCORRECT
    }
       

    return 0;

}