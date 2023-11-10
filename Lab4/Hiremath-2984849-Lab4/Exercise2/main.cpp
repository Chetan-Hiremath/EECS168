#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{

char userChoice;
int userGuess;
int SecretNumber = 0;
int userTries = 0;
int Difference = 0;
int Closer = 100;
int ClosestGuess = 0;
srand (time(NULL));
std:: cout << "Welcome to the number guessing game." << std:: endl;
SecretNumber = rand() % 100 + 1;
do
{

std:: cout << "Guess a number: ";
std:: cin >> userGuess; 
userTries++; 
    if (userGuess > SecretNumber)
    {
       std:: cout << "Sorry! Your guess is too high!" << std:: endl;
    }
    else if (userGuess < SecretNumber)
    {
       std:: cout << "Sorry! Your guess is too low!" << std:: endl;
    }
    if (userGuess != SecretNumber)
    {
    Difference = abs(userGuess - SecretNumber);
    }
    if (Closer > Difference)
    {
    Closer = abs(userGuess - SecretNumber);
    ClosestGuess = userGuess;
    }
    if (userGuess == SecretNumber)
    {
       std:: cout << "You win!!" << std:: endl;
       std:: cout << "You guessed the secret number after " << userTries << " guess(es)." << std:: endl;
       std:: cout << "Your closest guess was " << ClosestGuess << std:: endl;
    } 
} while (userGuess != SecretNumber);

std:: cout << "Would you like to play again? (y/n): ";
std:: cin >> userChoice;
    if (userChoice == 'y' || userChoice == 'Y')
    {
       main();
    }
    else if (userChoice == 'n' || userChoice == 'N')
    {
       std:: cout << "Thanks for playing the game!" << std:: endl;
    } 

}


