#include <iostream>
#include <math.h>

int main()
{
   std::cout.precision(2);
   std::cout << std::fixed;
   char userSaladsChoice;
   char userDrinksChoice;
   char userCakesChoice;
   int userSalads;
   int userDrinks;
   int userCakes;
   int userAge;
   double Subtotal = 0.0;
   double Tax = 0.0;
   double Discount = 0.0;
   double TotalDiscount = 0.0;
   double CakePrice = 0.0;
   std:: cout << "============================" << std:: endl;
   std:: cout << "WELCOME TO THE RESTAURANT" << std:: endl;
   std:: cout << "============================" << std:: endl;
   std:: cout << std:: endl;
   std:: cout << "Do you want Salads? (y/n): ";
   std:: cin >> userSaladsChoice;
   if (userSaladsChoice == 'Y' || userSaladsChoice == 'y')
   { 
     std:: cout << "How many Salads?: ";
     std:: cin >> userSalads;
     std:: cout << std:: endl;
   }
   else if (userSaladsChoice == 'N' || userSaladsChoice == 'n')
   { 
     userSalads = 0;
     std:: cout << std:: endl;
   }
   else 
   { 
     std:: cout << "Invalid choice!";
   }
   if (userSalads >= 0)
   { 
     userSalads = userSalads;
   }
   else 
   {
     std:: cout << "Invalid amount!" << '\n';
     std:: cout << std:: endl;
   }

   std:: cout << "Do you want Drinks? (y/n): ";
   std:: cin >> userDrinksChoice;
   if (userDrinksChoice == 'Y' || userDrinksChoice == 'y')
   { 
     std:: cout << "How many Drinks?: ";
     std:: cin >> userDrinks;
     std:: cout << std:: endl;
   }
   else if (userDrinksChoice == 'N' || userDrinksChoice == 'n')
   { 
     userDrinks = 0;
     std:: cout << std:: endl;
   }
   else 
   { 
     std:: cout << "Invalid choice!";
   }
   if (userDrinks >= 0)
   { 
     userDrinks = userDrinks;
   }
   else 
   {
     std:: cout << "Invalid amount!" << '\n';
     std:: cout << std:: endl;
   }

   std:: cout << "Do you want Cakes? (y/n): ";
   std:: cin >> userCakesChoice;
   if (userCakesChoice == 'Y' || userCakesChoice == 'y')
   { 
     std:: cout << "How many Cakes?: ";
     std:: cin >> userCakes;
     std:: cout << std:: endl;
   }
   else if (userCakesChoice == 'N' || userCakesChoice == 'n')
   { 
     userCakes = 0;
     std:: cout << std:: endl;
   }
   else 
   { 
     std:: cout << "Invalid choice!";
   }
   if (userCakes >= 0)
   { 
     userCakes = userCakes;
   }
   else 
   {
     std:: cout << "Invalid amount!" << '\n';
     std:: cout << std:: endl;
   }

   std:: cout << "How old are you?: ";
   std:: cin >> userAge;
   if (userAge >= 65)
   { 
     Discount = 0.10;
     CakePrice = 3.55;
   }
   else if (userAge <= 5)
   { 
     Discount = 1;
     CakePrice = 0.0;
   }
   

   if (userSalads >= 0 && userDrinks >= 0 && userCakes >= 0)
   {
     std:: cout << "============================" << std:: endl;
     std:: cout << userSalads << " Salads @ $4.25 ==> " << "$" << (userSalads * 4.25) << std:: endl;
     std:: cout << userDrinks << " Drinks @ $1.05 ==> " << "$" << (userDrinks * 1.05) << std:: endl;
     std:: cout << userCakes << " Cakes @ $" << CakePrice << " ==> " << "$" << (userCakes * CakePrice) << std:: endl;
     Subtotal = ((userSalads * 4.25) + (userDrinks * 1.05) + (userCakes * CakePrice));
     std:: cout << "Subtotal: " << "$" << Subtotal << std:: endl;
     Tax = (Subtotal * 0.05);
     std:: cout << "Tax: " << "$" << Tax << std:: endl;
     TotalDiscount = (Subtotal * Discount);
     std:: cout << "Discount: " << "$" << TotalDiscount << std:: endl;
     std:: cout << "============================" << std:: endl;
     std:: cout << "Total: " << "$" << ((Subtotal - TotalDiscount) + Tax) << std:: endl;
     std:: cout << std:: endl;
     std:: cout << "Please come again!" << std:: endl;
     std:: cout << std:: endl;
   }
   else 
   {  
     std:: cout << std:: endl;
     std:: cout << "Order is rejected due to the" << std:: endl;
     std:: cout << "negative amount! Try again!";
     std:: cout << std:: endl;
   }
}


