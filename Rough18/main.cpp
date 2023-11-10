#include <iostream>

int main()
{
   char userChoice;
   int userNumber;
   do
   {
      std:: cout << "Enter a number: "; 
      std:: cin >> userNumber;
      for (int i = 7; i <= userNumber; i = i + 7)
      { 
          std:: cout << i << std:: endl;
      }
   std:: cout << "Do you want to quit (q/Q): ";
   std:: cin >> userChoice;
   if (userChoice == 'q' || userChoice == 'Q')
     {
      std:: cout << "Thank you!" << std:: endl;
     }
   else
     {
      main();
     }
   } while (userChoice != 'q' && userChoice != 'Q');
}