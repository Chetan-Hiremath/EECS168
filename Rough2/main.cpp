#include <iostream>

int main()
{
        double userBase;
        double userHeight;
	std:: cout << "Enter the base and height: ";
        std:: cin >> userBase >> userHeight;
        std:: cout << "The area is: ";
        std:: cout << ((userBase * userHeight) / 2) << std::endl;
}
