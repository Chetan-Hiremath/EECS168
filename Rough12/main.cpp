#include <iostream>

int main()

{ 

    int userNum = 0;
    std:: cout << "Enter a number: ";
    std:: cin >> userNum;

while (userNum != 42)
{
    std:: cout << "Sorry! Enter another value: ";
    std:: cin >> userNum;
}

}
