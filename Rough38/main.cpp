#include <iostream>

int main()
{
int GridValue;
std:: cout << "Enter the grid value: ";
std:: cin >> GridValue;

for (int i = 1; i<= GridValue; i++)
  {  
    for (int j = 1; j <= GridValue; j++)
    {
        if (i == 1)
        {  
          std:: cout << "B ";
        }
        else if (i == GridValue)
        {  
          std:: cout << "B ";
        }
        else if (j == 1) 
        {
          std:: cout << "B ";
        }
        else if (j == GridValue)
        {  
          std:: cout << "B ";
        }
        else if (i != 1 && i != GridValue && j != 1 && j != GridValue)
        {
          std:: cout << "A ";
        }
    }
std:: cout << '\n';
  }

}
