#include <iostream>

int main()
{
    double Sum = 0;
    int size = 0;
    double* grades = nullptr;
    std::cout << "Enter how many scores do you want to enter: ";
    std::cin >> size;
    grades = new double[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter a grade: ";
        std::cin >> grades[i];
        Sum = Sum + grades[i];
    }
    std::cout << "Average: " << (Sum / size) << std::endl;
    std::cout << "A's: \n";
    for (int i = 0; i < size; i++)
    {
        if (grades[i] >= 90.0)
        {
            std::cout << grades[i] << std::endl;
        }
    }
    std::cout << "F's: \n";
    for (int i = 0; i < size; i++)
    {  
        if (grades[i] < 60.0)
        {
            std::cout << grades[i] << std::endl;
        }
    }
    delete[] grades;
}