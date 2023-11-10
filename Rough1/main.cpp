#include <iostream>

int main()
{
        int userTacos;
        int userSalads;
	std::cout << "How many tacos?: ";
        std::cin >> userTacos;
	std::cout << "How many salads?: ";
        std::cin >> userSalads;
        std::cout << "The grand total is: ";
        std::cout << ((7 * userTacos) + (5 * userSalads)) << std::endl;
}
