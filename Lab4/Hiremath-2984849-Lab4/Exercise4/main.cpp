#include <iostream>

int main()
{

int userChoice;
int userValue;
do{
std:: cout << "1) Select a specific number" << std:: endl;
std:: cout << "2) Display visible ASCII values from 33 to 126" << std:: endl;
std:: cout << "3) Exit" << std:: endl;
std:: cout << "Choice: ";
std:: cin >> userChoice;
      if (userChoice == 1)
      {
      std:: cout << "Enter value: ";
      std:: cin >> userValue;
      std:: cout << userValue << " = " << char (userValue) << std:: endl;
      }
      else if (userChoice == 2)
      {
      for (int i = 33; i<= 126; i++)
        {
        std:: cout << i << " = " << char (i) << std:: endl;     
        }
      }
std:: cout<< std:: endl;
}while (userChoice != 3);

}
      
