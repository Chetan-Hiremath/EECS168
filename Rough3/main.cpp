#include <iostream>

int main()
{

char userCharacter;
std:: cout << "Enter a character: ";
std:: cin >> userCharacter;
     if (userCharacter == 'B' || userCharacter == 'b')
     {
     std:: cout << "Burgers are $7." << '\n';
     }   
     else if (userCharacter == 'S' || userCharacter == 's')
     {
     std:: cout << "Salads are $5." << '\n';
     }
     else
     {
     std:: cout << "Invalid." << '\n';
     }
}

