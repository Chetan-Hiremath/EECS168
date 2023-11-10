#include <iostream>
#include <string>
#include <fstream>

int main()
{ 
  int userRows;
  int userColumns;
  double userSum = 0;
  std:: string userFile = " ";
  std:: ifstream inFile;
  std:: ofstream outFile1; 
  std:: ofstream outFile2;
  std:: ofstream outFile3;
  std:: ofstream outFile4;
  inFile.open("input.txt");
  inFile >> userRows;
  inFile >> userColumns;
  const int SIZE = userRows;
  const int SIZE2 = userColumns;
  double** userGrid = nullptr;
  do 
  {  
     std:: cout << "Enter the name of the file: "; 
     std:: cin >> userFile;
     if (userFile == "averages.txt")
     {  
       outFile1.open(userFile);
       userGrid = new double*[SIZE];
       for (int i = 0; i < SIZE; i++)
       {
         userGrid[i] = new double[SIZE2];
       }
       for (int i = 0; i < SIZE; i++)
       {
         for (int j = 0; j < SIZE2; j++)
         {
           inFile >> userGrid[i][j];
         }
       }
       for (int i = 0; i < SIZE; i++)
       {
         for (int j = 0; j < SIZE2; j++)
         {
            userSum = userSum + userGrid[i][j];
         }
       }
       outFile1 << "Total Average: ";
       outFile1 << userSum / (SIZE * SIZE2); 
       userSum = 0;
       outFile1 << std:: endl;
       for (int i = 0; i < SIZE; i++)
       {
         for (int j = 0; j < SIZE2; j++)
         {
            userSum = userSum + userGrid[i][j];
         }
         outFile1 << "Row " << (i + 1) << "'s average: ";
         outFile1 << userSum / SIZE << " ";
         userSum = 0;
         outFile1 << std:: endl;
       }
     }
     else if (userFile == "reverse.txt")
     {  
       outFile2.open(userFile);
       userGrid = new double*[SIZE];
       for (int i = 0; i < SIZE; i++)
       {
         userGrid[i] = new double[SIZE2];
       }
       for (int i = 0; i < SIZE; i++)
       {
         for (int j = 0; j < SIZE2; j++)
         {
           inFile >> userGrid[i][j];
         }
       }
       for (int i = 0; i < SIZE; i++)
       {
         for (int j = SIZE2-1; j >= 0; j--)
         {
            outFile2 << userGrid[i][j] << " ";
         }
        outFile2 << std:: endl;
       }
     }
     else if (userFile == "flipped.txt")
     {  
       outFile3.open(userFile);
       userGrid = new double*[SIZE];
       for (int i = 0; i < SIZE; i++)
       {
         userGrid[i] = new double[SIZE2];
       }
       for (int i = 0; i < SIZE; i++)
       {
         for (int j = 0; j < SIZE2; j++)
         {
           inFile >> userGrid[i][j];
         }
       }
       for (int i = SIZE-1; i >= 0; i--)
       {
         for (int j = 0; j < SIZE2; j++)
         {
           outFile3 << userGrid[i][j] << " ";
         }
        outFile3 << std:: endl;
       }
     }
     else if (userFile == "diagonal.txt")
     {  
       outFile4.open(userFile);
       userGrid = new double*[SIZE];
       for (int i = 0; i < SIZE; i++)
       {
         userGrid[i] = new double[SIZE2];
       }
       for (int i = 0; i < SIZE; i++)
       {
         for (int j = 0; j < SIZE2; j++)
         {
           inFile >> userGrid[i][j];
         }
       }
       for (int i = 0; i < SIZE; i++)
       {
         for (int j = 0; j < SIZE2; j++)
         {
           outFile4 << userGrid[j][i] << " ";
         }
        outFile4 << std:: endl;
       }
     }
     else 
     {
        std:: cout << "Invalid File!" << std:: endl;
     }
     for (int i = 0; i < SIZE; i++)
     {
       delete[]userGrid[i];
     }
     delete[]userGrid;
  } while (userFile != "averages.txt" && userFile != "reverse.txt" && userFile != "flipped.txt" && userFile != "diagonal.txt");

}

















