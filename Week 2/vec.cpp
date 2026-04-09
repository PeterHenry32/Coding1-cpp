// Peter Henry Coding 1 Spring 2026
// Vector, iterators, and algorithms


#include <iostream>
#include<string>
#include <vector>   // for vectors!
#include <algorithm>

using namespace std;

int main (){
        cout << "Let's learn about Vectors!";
        cout << "Press 1 for Vectors.\n";
        cout << "Presss 2 for push_back() and pop_back().\n";
        cout << "Press 3 for algorithms.\n";

        int chapter = 0;
        cin >> chapter;
        if(chapter == 1) {
            //collection initializer
            vector<string> names = {"Finn",
                "Jake", 
                "Bubblegum", 
                "Marceline", 
                "BMO"};
            cout << "There are " << names.size() << " in the vector.\n";
            cout << "Here are your names:\n";

            for(int i = names.size () -1; i >= 0; i--){
                cout << i + 1 << "." << names [i] << "\n";
            }

            cout << "The first name in the vector is " << *(names.begin()) << ".\n";

            // creating our first iterator. it's a pointer to an element in a vector.
            vector<string>::iterator iter;

            iter = names.begin() + 2;

            // dereference the iter with an asterisk at the beginning. 
            // what's with that word "dereference"? a pointer can be thought of as a nickname
            // a "reference" to something else. when we do-reference it, we get the value
            // that is at the point. 
            cout << "iter is point at " << *iter << ".\n";

        }   //end of chapter 1
        if(chapter == 2) {
            cout << " Lets use push_back() and pop_back().\n";

            vector<string> favMovies;

            while (favMovies.size() < 3) {
                cout << " Please add a favorite movie: ";
                string input;
                cin >> input;
                //cin.ignore(INT_MAX) ;   // fixes the issues with working with cin and getline
                //getline(cin, input);

                favMovies.push_back(input);
            }

            cout << "Here are your favorite movies:\n";
            // this time, use a for look with an iterator to move through the vector.
            for(vector<string>::iterator iter = favMovies.begin(); iter != favMovies.end(); iter++) {
                cout << *iter << endl;
            }
        }
        else{
            cout << chapter << " isn't one of the options.\n";
        }
        
}