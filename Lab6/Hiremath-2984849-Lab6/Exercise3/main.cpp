
#include <fstream>
#include <iostream>

int main()
{
int userChoice;
int userOccurence = 0;
char userLetterChoice;
std::ifstream inFile;
inFile.open("input.txt");
int userSize;
inFile >> userSize;
const int SIZE = userSize;
int userNums[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
       inFile >> userNums[i];
    }
std:: cout << "The contents of input. txt: " << std:: endl;
std:: cout << "[";
    for (int i = 0; i < SIZE; i++)
    {
       std:: cout << " " << userNums[i] << " ";
    }
std:: cout << "]" << std:: endl;
do
{
std:: cout << "Input a value to search for: ";
std:: cin >> userChoice;
for (int i = 0; i < SIZE; i++)
{
  if (userChoice == userNums[i])
  {
    userOccurence = userOccurence + 1;
  }
}
  if (userOccurence >= 1)
  {
    std:: cout << userChoice << " is in the array!" << std:: endl;
  }
  else if (userOccurence < 1)
  {
    std:: cout << userChoice << " is not in the array!" << std:: endl;
  }
std:: cout << "Do you want to quit? (y/n): ";
std:: cin >> userLetterChoice;
if (userLetterChoice == 'y' || userLetterChoice == 'Y')
  { 
   std:: cout << "Thank you!" << std:: endl;
  }
else if (userLetterChoice == 'n' || userLetterChoice == 'N')
  {
   main();
  }
} while (userLetterChoice == 'y' && userLetterChoice == 'Y');

}