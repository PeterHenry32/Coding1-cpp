    // Peter Henry
    // let's create a list of favorites

    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    using namespace std;

    int main() {
       
        vector<string> favs;

        while(true) {
            cout << "What would you like to do/\n";
            cout << "You can 'add', 'edit', 'remove', 'show', or 'quit'.\n";

            string input;
            getline(cin, input);
            
            if(input == "quit") {
                cout << "Thanks for playing.\n";
                break;
            }
            else if(input == "add") {
               //ask them for input
               cout << "What game would you like to add?\n";
               //get input
               getline(cin, input);
               //add the game to the list 
               favs.push_back(input);
            }
            else if(input == "edit") {
                //show them list of games
                cout << "here are your Games:\n";
            for(int i = 0; i < favs.size(); i++) {
                cout << favs[i] << ".\n";
            } 
                         cout << "Please choose a Game to change:\n";
            vector<string>::iterator chosenfavs;

            string input;
            cin >> input;

            }

            else if(input == "show") {
                //show them input
                cout << "Here are your favorite games!\n";
                for(vector<string>::iterator iter = favs.begin(); iter != favs.end(); iter++) {
                    cout << *iter << endl;
                }   
            }

            else {
                cout << "I dont recognize that input.\n";
            }
        }
    }