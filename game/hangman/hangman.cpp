#include <iostream>
#include <string>
using namespace std;
void Victory_or_lost(string z, string x) {
    if (z == x) {
        cout << "Congrats, you win!";
    }
    else {
        cout << "Sorry, you lose!" << endl;
        cout << "The word is >>" << x;
    }
}
string checkingWord(string z, string x) {
    unsigned maxguess(0);
    char guess;

    do
    {
        cout << "Uncovered: >>" << z << "<< Your guess: " << endl;
        cin >> guess;
        for (int i = 0; i < x.length(); i++)
        {
            if (guess == x[i])
                z[i] = guess;
            if (z == x) {
                return "Congrats, you win!";
            }



        }

    } while (++maxguess < x.size() + 5);
    Victory_or_lost(z, x);

}

int main()
{

    string hidden;
    cout << "-----------------------------HANGMAN-----------------------------" << endl;
    cout << "Welcome to hangman, the game that every one knows how to play!" << endl;
    cout << "What is the word for guessing?" << endl << "Type it here ------>";
    cin >> hidden;
    string answer;
    for (int i = 0; i < hidden.size(); i++) {
        answer = "*" + answer;
    }
    cout << checkingWord(answer, hidden);
}