/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Chetan Hiremath
 * KUID: 2984849
 * Email Address: chiremath@ku.edu
 * Homework Assignment Number:   EECS-168/169 Lab 1 (Exercise 1)
 * Description: This program will display 1 out of 5 patterns based on their corresponding choices. 
 * Date: March 3, 2020
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include <iostream>

int main()
{

int userNumberChoice;
int userSize;
char userLetterChoice;
int RunningTotal = 0;
int userRow;
int userColumn;
std:: cout << "1) Checkerboard" << std:: endl;
std:: cout << "2) Rook Path" << std:: endl;
std:: cout << "3) Running Total" << std:: endl;
std:: cout << "4) Upper Left Triangle" << std:: endl;
std:: cout << "5) Upper Right Triangle" << std:: endl;
std:: cout << std:: endl;
std:: cout << "Input a choice: ";
std:: cin >> userNumberChoice;
std:: cout << std:: endl;

if (userNumberChoice == 1)
   {
   std:: cout << "Input a size: ";
   std:: cin >> userSize;
   std:: cout << std:: endl;
   for (int i = 1; i <= userSize; i++)
    { 
    for (int j = 1; j <= userSize; j++)
     {
        if ((i+j) % 2 == 0)
        {
           std:: cout << "O";
        }
        else if ((i+j) % 2 == 1)
        {
           std:: cout << "X";
        }
     }
    std:: cout << '\n';
    }
   } 
else if (userNumberChoice == 2)
   {
   std:: cout << "Input a size: ";
   std:: cin >> userSize;
   std:: cout << std:: endl;
   std:: cout << "Row: ";
   std:: cin >> userRow;
   std:: cout << "Column: ";
   std:: cin >> userColumn;
   std:: cout << "Position of the Rook: (" << userRow << "," << userColumn << ")" << std:: endl;
   for (int i = 0; i < userSize; i++)
     { 
    for (int j = 0; j < userSize; j++)
      {
        if (i == userRow && j == userColumn)
        {
          std:: cout << "R";
        }
        else if (i == userRow)
        {
          std:: cout << "-";
        }
        else if (j == userColumn)
        {
          std:: cout << "|";
        }
        else
        { 
          std:: cout << "*"; 
        }
      }
    std:: cout << std:: endl;
     }
   }
else if (userNumberChoice == 3)
   {
   std:: cout << "Input a size: ";
   std:: cin >> userSize;
   std:: cout << std:: endl;
   for (int i = 1; i <= userSize; i++)
      {
         for (int j = 1; j <= userSize; j++)
         {
           RunningTotal = 1 + RunningTotal;
           std:: cout << RunningTotal << ",";
         }
         std:: cout << std:: endl;
      }
   }
else if (userNumberChoice == 4)
   {
   std:: cout << "Input a size: ";
   std:: cin >> userSize;
   std:: cout << std:: endl;
   for (int i = userSize; i >= 1; --i)
     {
        for (int j = 1; j <= i; ++j)
        {
            std:: cout << "*";
        }
        std:: cout << std:: endl;
     }
   }
else if (userNumberChoice == 5)
   {
   std:: cout << "Input a size: ";
   std:: cin >> userSize;
   std:: cout << std:: endl;
   for (int i = 0; i <= userSize; i++)
     {
        for (int j = 1; j <= i; j++)
        {
            std:: cout << " ";
        }
        for (int k = userSize - 1; k >= i; k--)
        {
           std:: cout << "*";
        }
        std:: cout << std:: endl;
     }
   }
else 
   {
   std:: cout << "Invalid Choice" << std:: endl;
   }

std:: cout << std:: endl;
std:: cout << "Do you want to quit (y/n)?: ";
std:: cin >> userLetterChoice;
if (userLetterChoice == 'y' || userLetterChoice == 'Y')
   {
   std:: cout << "Goodbye..." << std:: endl;
   }
else if (userLetterChoice == 'n' || userLetterChoice == 'N')
   {
   main();
   }

}
