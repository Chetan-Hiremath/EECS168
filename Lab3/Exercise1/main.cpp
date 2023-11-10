#include <iostream>

int main()
{

int userWind;
std:: cout << "Input a wind speed (m/s): ";
std:: cin >> userWind;
     if (userWind >= 70)
     {
       std:: cout << "The wind speed of " << userWind << " m/s is a Category 5 hurricane." << std:: endl;
     }
     else if (userWind < 70 && userWind >= 58)
     {
       std:: cout << "The wind speed of " << userWind << " m/s is a Category 4 hurricane." << std:: endl;
     }
     else if (userWind < 58 && userWind >=50)
     {
       std:: cout << "The wind speed of " << userWind << " m/s is a Category 3 hurricane." << std:: endl;
     }
     else if (userWind < 50 && userWind >=43)
     {
       std:: cout << "The wind speed of " << userWind << " m/s is a Category 2 hurricane." << std:: endl;
     }
     else if (userWind < 43 && userWind >=33)
     {
       std:: cout << "The wind speed of " << userWind << " m/s is a Category 1 hurricane." << std:: endl;
     }
     else if (userWind < 33 && userWind >=18)
     {
       std:: cout << "The wind speed of " << userWind << " m/s is a Tropical Storm." << std:: endl;
     }
     else if (userWind < 18 && userWind >=0)
     {
       std:: cout << "The wind speed of " << userWind << " m/s is a Tropical Depression." << std:: endl;
     }
     else 
     {
       std:: cout << "Negative wind? Sorry, that's invalid." << std:: endl;
     }
}
