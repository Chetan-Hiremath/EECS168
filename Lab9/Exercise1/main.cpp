#include <iostream>
#include <fstream>
#include <string>
void userMenu()
{
  std:: cout << "1) Insert " << std:: endl;
  std:: cout << "2) Remove " << std:: endl;
  std:: cout << "3) Count " << std:: endl;
  std:: cout << "4) Print " << std:: endl;
  std:: cout << "5) Exit " << std:: endl;
}
void Print(int arr[], int size)
{
  std:: cout << "[ "; 
  for (int i = 0; i < size; i++)
   {
     std:: cout << arr[i] << " ";
   }
  std:: cout << "]" << std:: endl;
}
int Count(int arr[], int size, int target)
{
  int userCount = 0;
  for (int i = 0; i < size; i++)
   {
     if (target == arr[i])
     {
      target = arr[i];
     } 
     else if (target != arr[i])
     {
       userCount = 0;
     }
   }
  for (int i = 0; i < size; i++)
   {
     if (target == arr[i])
     {
     userCount++;
     }
   }
 return(userCount);
}
int* Insert (int arr[], int& size, int value, int position)
{  
    size = size + 1;
    int* NewArray = new int[size + 1]; 
    for (int i = 0; i < size; i++) 
    {
      if (i < position)
      {
        NewArray[i] = arr[i]; 
      }
      else if (i == position)
      {
        NewArray[i] = value;
      }
      else if (i > position)
      {
        NewArray[i] = arr[i-1];
      }
    }
    delete[] arr;
    return(NewArray); 
}
int* Remove (int arr[], int& size, int position)
{  
    position = position - 1;
    size = size - 1;
    int* NewArray = new int[size - 1]; 
    for (int i = 0; i < size; i++) 
    {
      if (i < position)
      {
        NewArray[i] = arr[i]; 
      }
      else if (i == position)
      {
        NewArray[i] = arr[i];
      }
      else if (i > position)
      {
        NewArray[i] = arr[i+1];
      }
    }
    delete[] arr;
    return(NewArray); 
}
int main(int argc, char** argv)
{
  std::ifstream InFile;
  std::string userFile; 
  std::string SIZE; 
  int userSize = 0;
  int userChoice;
  int userValue;
  int userPosition;
  int *userNums = nullptr;
  userNums = new int[userSize];
  if (argc > 1)
  {
    userFile = argv[1];
    SIZE = argv[2];
    userSize = std::stoi(SIZE);
  }
  while (userFile == "nums.txt" && userChoice != 5)
  {
    InFile.open(userFile);
    for (int i = 0; i < userSize; i++)
    {
      InFile >> userNums[i];
    }
    userMenu();
    std:: cout << "Enter the Choice: ";
    std:: cin >> userChoice;
    if (userChoice == 1)
    {
    std:: cout << "Enter the value: ";
    std:: cin >> userValue;
    std:: cout << "Enter the position to include the position's value: ";
    std:: cin >> userPosition;
    userNums = Insert(userNums, userSize, userValue, userPosition);
    }
    else if (userChoice == 2)
    {
    std:: cout << "Enter the position to remove the position's value: ";
    std:: cin >> userPosition;
    userNums = Remove(userNums, userSize, userPosition);
    }
    else if (userChoice == 3)
    {
    std:: cout << "Enter the value: ";
    std:: cin >> userValue;
    int userTest = 0;
    userTest = Count(userNums, userSize, userValue);
    std:: cout << userValue << " occurs " << userTest << " time/times." << std:: endl;
    }
    else if (userChoice == 4)
    {
     Print(userNums, userSize);
    }
    else if (userChoice > 5 || userChoice <= 0)
    {
    std:: cout << "Invalid Choice!" << std:: endl;
    }
  }
delete[] userNums;
}