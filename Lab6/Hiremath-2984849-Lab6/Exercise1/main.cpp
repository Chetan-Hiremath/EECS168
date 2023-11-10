#include <iostream>

int main()
{
double userSum = 0;
const int SIZE = 5;
double userNum[SIZE]; 
double userMaxValue;
double userMinValue;
    std::cout << "Please enter 5 numbers" << std:: endl;
    for (int i = 0; i < SIZE; i++)
    {
        std:: cout << "Input a number in your array: "; 
        std:: cin >> userNum[i];
        userSum = userSum + userNum[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        std:: cout << userNum[i] << std:: endl;
    }
    for (int i = 0; i < SIZE; i++)
    {
        userMaxValue = userNum[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        userMinValue = userNum[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
       if (userNum[i] > userMaxValue)
       {
         userMaxValue = userNum[i];
       }
    }
    for (int i = 0; i < SIZE; i++)
    {
       if (userNum[i] < userMinValue)
       {
         userMinValue = userNum[i];
       }
    }
    std:: cout << "The Sum of all the values is: " << userSum << std:: endl;
    std:: cout << "The Average of all the values is: " << (userSum / SIZE) << std:: endl;
    std:: cout << "The largest value is: " << userMaxValue << std:: endl;
    std:: cout << "The smallest value is: " << userMinValue << std:: endl;
}