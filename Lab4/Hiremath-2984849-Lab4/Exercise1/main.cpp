#include <iostream>
#include <string>

int main()

{

std:: string userWord;
char userLetter;
int count = 0;
std:: cout << "Enter a string: ";
std:: cin >> userWord;
std:: cout << "Enter a character to count: ";
std:: cin >> userLetter;
for (unsigned int i = 0; i <= userWord.length(); i++)
{
    if (userWord[i] == userLetter)
    {
       count++; 
    } 
}

std:: cout << "In the string " << userWord << " the character '" << userLetter <<  "' occurs " << count <<  " time(s)." << std:: endl;

}



