// Peter Henry coding 1 week 15
//class inheritance and header files if we can.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

// can we build a vector of slimes?
// can we get the slimes to fight each other?
// can we biold boss slimes?

vector<string> slimeNames = {"Tombow", "Cheryl", "Daryll", "Hot Sauce", "Mr White"};


class baseSlime {
public:
    string name;
    int health;
    int damage;

    //default constructor
    baseSlime() {
        // get a random name between 0 and
        name = slimeNames[rand() % slimeNames.size()] + "Slime";
        health = rand() % 5 + 5;
        damage = rand() % 6 + 3;
    }

    void hello(){
        cout << "My name is " << name << ".\nI Have " << health;
        cout << "health and " << damage << " damage.\n";
    }

    bool attack(baseSlime& opponent) {
        opponent.health -= damage;
        cout << name << " attacks" << opponent.name << "!\n";

        // did this attack defeat the opponent?
        if(opponent.health <=0) {
            return true;
        }
        else {
            return false;
        }
        
    }

    // step 1 = who attacks first?
    // step 2 = fighater A attacks fighter B
    // step 3 = (if fighterB is still alive) fighter b attacks fighter A
};

int main(){
    srand(time(0));
    cout << "Let's make some slimes fight!\n";

    baseSlime Jeff;
    Jeff.name = "Jeff Slime"; 
    Jeff.health = 10;
    Jeff.damage = 4;

    baseSlime Dinah;
    Dinah.name = "Dinah Slime";
    Dinah.health = 10;
    Dinah.damage = 4;

    Jeff.hello();
    Dinah.hello();

    cout << "Creating our glov of slimes...\n";
    vector<baseSlime> glob(6);

    for(int i = 0; i < glob.size(); i++) {
        glob[i].hello();
        cout << "\n\n";
    }

    cout << "Lets have Peter and Stefan fight.\n";

    baseSlime temp, temp2;
    baseSlime& fighterA = temp;
    baseSlime& fighterB = temp2;

    if(rand() % 2 == 0) {
        cout << "Peter goes first!\n";
        fighterA= Peter;
        fighterB= Stefan;
    }
    else { 
        cout << "Stefan goes first!";
        fighterA= Stefan;
        fighterB= Peter;
    }

    //the thunderdome
    while(fighterA.health > 0 && fighterB.health > 0) {
        //cout << fighterA.name << " punches " << fighterB.name << "!\n";
        //A attacks B
        //fighterB.health -= fighterA.damage;
        if(fighterA.attack(fighterB)) {
            cout << fighterB.name << " has been defeated\n";
        }
        else {
            if(fighterB.attack(fighterA)) {
                cout << fighterA.name << " has been defeated\n";
        }
        fighterA.attack(fighterB);
        fighterB.attack(fighterA);
        //is B still alive
        if(fighterB.health > 0) {
            cout << fighterB.name << " punches " << fighterA.name << "!\n";
            //B attacks A
            fighterA.health -= fighterB.damage;
            //is fighterA still alive
            if(fighterA.health <= 0) {
                cout << fighterA.name << "has been defeated!\n";
            }
        }
        else {
            cout << fighterB.name << " Has been defeated!\n";
        }
    }
}



return 0;

}
