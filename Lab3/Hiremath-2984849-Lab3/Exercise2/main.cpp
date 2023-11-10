#include <iostream>
#include <math.h>

int main()
{

int userNumerator;
int userDenominator;
std:: cout << "Enter a numerator: ";
std:: cin >> userNumerator;
std:: cout << "Enter a denominator: ";
std:: cin >> userDenominator;
     if (userNumerator >=0 && userDenominator != 0)
     {
     std:: cout << userNumerator << " / " << userDenominator << " = ";
     std:: cout << (userNumerator / userDenominator);
     std:: cout << " Remainder " << (userNumerator % userDenominator) <<  std:: endl;
     }
     else 
     { 
     std:: cout << "Sorry. You may not divide by 0." << std:: endl;
     }
}

