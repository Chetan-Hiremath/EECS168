#include <fstream>
#include <iostream>
#include <string>

int main()
{
double userValue;
int userMaxValue;
int userMinValue;
std::ifstream inFile;
std::ofstream outFile1;
std::ofstream outFile2;
inFile.open("input.txt");
std::string userFile = " ";
int userSize;
inFile >> userSize;
const int SIZE = userSize;
double userNums[SIZE];
do
 {
std:: cout << "Enter the name of the file: "; 
std:: cin >> userFile;
if (userFile == "normalized.txt")
  {
    outFile1.open(userFile);
    for (int i = 0; i < SIZE; i++)
    {
       inFile >> userNums[i];
    }
outFile1 << "Original array: [ ";
    for (int i = 0; i < SIZE; i++)
    {
       outFile1 << userNums[i] << " ";
    }
outFile1 << "]" << std:: endl;
for (int i = 0; i < SIZE; i++)
    {
        userMaxValue = userNums[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        userMinValue = userNums[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
       if (userNums[i] > userMaxValue)
       {
         userMaxValue = userNums[i];
       }
    }
    for (int i = 0; i < SIZE; i++)
    {
       if (userNums[i] < userMinValue)
       {
         userMinValue = userNums[i];
       }
    }
    outFile1 << "Normalized array: [ ";
    for (int i = 0; i < SIZE; i++)
    {
      userValue = (userNums[i] - userMinValue) / (userMaxValue - userMinValue);
      outFile1 << userValue << " ";
    }
    outFile1 << "]" << std:: endl;
  }
else if (userFile == "reversed.txt")
  {
    outFile2.open(userFile);
    for (int i = 0; i < SIZE; i++)
    {
       inFile >> userNums[i];
    }
    outFile2 << "Original array: [ ";
    for (int i = 0; i < SIZE; i++)
    {
       outFile2 << userNums[i] << " ";
    }
    outFile2 << "]" << std:: endl;
    outFile2 << "Reversed array: [ ";
    for (int i = SIZE-1; i >= 0; i--)
    {
      outFile2 << userNums[i] << " ";
    }
    outFile2 << "]" << std:: endl;
  }
else 
  {
     std:: cout << "Invalid file!" << std:: endl;
  }
 } while (userFile != "normalized.txt" && userFile != "reversed.txt");
}