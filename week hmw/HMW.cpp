// Peter Henry final assignment


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <cctype>

using namespace std;

class Pal {
public:
    string name;
    int health;
    int damage;
};

int main() {


    Pal pal;
    string input;

    // ask the player what their name is
    cout << "what is your pals name ";

        getline(cin, input);
        pal.name = input;
   
    cout << "Hello " << pal.name << endl;

    // Display the name back to the user
    cout << "Hello," << pal.name << "! You have named your pal!\n";

    while(true) {
        cout << "What do you want to do?\n";

        getline(cin, input);
        
        for(char &c : input) {
            c = tolower(c);
        }
        //feed the critter
        if(input == "feed") {
            cout << "munch munch\n";
        }
        //pet the critter
        else if(input == "play") {
            cout << pal.name << " looks happy playing with you!\n";
        }
        //train the critter
        else if(input == "train") {
            cout << "You and " << pal.name << " worked up a sweat\n";
        }
        //status check
        else if(input == "status check") {
            cout << "Here are " << pal.name << "'s stats.\n";
        }
        //battle other creatures with options to 
            //attack
            //defend
            //run away
        else if(input == "battle") {
            cout << "ENEMY ENCOUNTER!\n";
        }
        //Exiting the game
        else if(input == "quit") {
            cout << "Come back soon.\n";
            break;
        }
        else {
            cout << "Command not recognized?\n";
        }
    }
    return 0;     
}


