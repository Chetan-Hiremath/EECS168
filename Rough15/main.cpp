#include <iostream>

int main()
{

int GridValue;
int userChoice;
std:: cout << "Choice: ";
std:: cin >> userChoice;
if (userChoice == 1)
{
std:: cout << "Enter the grid value: ";
std:: cin >> GridValue;
for (int i = 1; i<= GridValue; i++)
  {  
    for (int j = 1; j <= GridValue; j++)
    {
        if (i == j)
        {  
          std:: cout << "R ";
        }
        else if (i != j) 
        {
          std:: cout << "E ";
        }
    }
std:: cout << '\n';
  }
}

else if (userChoice == 2)
{
std:: cout << "Enter the grid value: ";
std:: cin >> GridValue;
for (int i = 1; i<= GridValue; i++)
  {  
    for (int j = 1; j <= GridValue; j++)
    {
        if (i + j == GridValue + 1)
        {  
          std:: cout << "R ";
        }
        else if (i + j != GridValue + 1) 
        {
          std:: cout << "E ";
        }
    }
std:: cout << '\n';
  }
}

}
