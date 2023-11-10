#include <iostream>
#include <string>

int main()
{
	std:: string* userWords = nullptr; 
	int userNumber = 0;
        std:: string userShortestWord = " ";
        std:: string userLongestWord = " ";
	std::cout << "Input an array size for your words array: ";
	std::cin >> userNumber;
        std::cout << "Now please enter " << userNumber << " words" << std:: endl;
	userWords = new std::string[userNumber];
	for (int i=0; i<userNumber; i++)
	{
           std::cout << "Input a word: ";
	   std::cin >> userWords[i];
	}
        for (int i=0; i<userNumber; i++)
        {
           if (userWords[i].length() > userLongestWord.length())
           {
             userLongestWord = userWords[i];
           } 
         }
        userShortestWord = userWords[0];
        for (int i=0; i<userNumber; i++)
        {
           if (userWords[i].length() < userShortestWord.length())
           {
             userShortestWord = userWords[i];
           }
        }
        std:: cout << "The longest word is: " << userLongestWord << std:: endl;
        std:: cout << "The shortest word is: " << userShortestWord << std:: endl;

   delete[]userWords;
}