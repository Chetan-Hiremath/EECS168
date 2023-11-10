#include <iostream>
#include <string>

int main()

{

std:: string SecretWord;
std:: string userWord;
char userChoice;
unsigned int Lettercount = 0;
SecretWord = "valentine";
std:: cout << "Welcome to the word guessing game." << std:: endl;
std:: cout << "Guess a word: ";
std:: cin >> userWord;

    while (userWord.length() != SecretWord.length())
    {  
    if (SecretWord.length() > userWord.length())
      {
       std:: cout << "The word is longer!" << std:: endl;
       std:: cout << "Incorrect! Guess again: ";
       std:: cin >> userWord;
      }
    else if (SecretWord.length() < userWord.length())
     { 
       std:: cout << "The word is shorter!" << std:: endl;
       std:: cout << "Incorrect! Guess again: ";
       std:: cin >> userWord;
     }
    }

    while (userWord != SecretWord)
    {  
       if (userWord.length() == SecretWord.length())
       {
          for (unsigned int i = 0; i < userWord.length(); i++)
          {
              if (userWord.at(i) == SecretWord.at(i))
              {
              Lettercount++;  
              } 
           }
         std:: cout << "You have " << Lettercount << " letter(s) correct!" << std:: endl;
         if (Lettercount != SecretWord.length())
         {
            Lettercount = 0;  
            std:: cout << "Incorrect! Guess again: ";
            std:: cin >> userWord;
         }
       }
    }

    if (userWord == SecretWord)
    {
    std:: cout << "You win!!" << std:: endl;
    }
    else if (userWord != SecretWord)
    {
    std:: cout << "Incorrect! Guess again: ";
    std:: cin >> userWord;
    }

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
