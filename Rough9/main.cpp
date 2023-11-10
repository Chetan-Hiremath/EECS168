#include <iostream>

int main()

{ 

int TotalSum = 0; 
for (int i = 15; i <= 55; i = i + 1)
{
    TotalSum = i + TotalSum;

}

std:: cout << "Total Sum of values from 15 to 55 is: " << TotalSum << '\n';

}
