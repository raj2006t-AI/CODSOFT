#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber;
    int guess;
    int chances = 0;
    srand(time(0)); 
    randomNumber = rand() % 100 + 1; 
    cout << "********** # Welcome to Guess the Number Game # **********\n\n";

    do
    {
        cout << "Guess the number between 1 to 100: ";
        cin >> guess;
        chances++;

        if (guess > randomNumber){
            cout << "The "<<guess<<" is Too high!\n\n";
        }
        else if (guess < randomNumber){
            cout << "The "<<guess<<" is Too low!\n\n";
        }
        else{
            cout << "\nHurray! You have guess the correct number.\n";
            cout << "You have guess the number "
            <<guess <<" in "<< chances << " Guessess!\n";
        }
    } 
        while (guess != randomNumber);

	return 0;
}
