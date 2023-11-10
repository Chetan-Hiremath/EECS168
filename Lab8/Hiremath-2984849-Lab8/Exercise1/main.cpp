#include <iostream>

void userMenu()
{
  std:: cout << "1) Count Digits " << std:: endl; 
  std:: cout << "2) Sum Digits " << std:: endl; 
  std:: cout << "3) Is Palindrome " << std:: endl; 
  std:: cout << "4) Reverse " << std:: endl; 
  std:: cout << "5) Exit " << std:: endl; 
}
int LastDigit(int n)
{
  int LastNum = 0; 
  LastNum = n % 10;
  return(LastNum);
}
int RemoveLastDigit(int n)
{
  int RemainingNum = 0; 
  RemainingNum = n / 10;
  return(RemainingNum);
}
int AddDigits(int CurrentNum, int NewDigit)
{
 int userSize = 1;
 while (userSize <= NewDigit)
 { 
   userSize *= 10;
 }
 return(userSize * CurrentNum + NewDigit);
}
int CountDigits (int n)
{
 int userCountNumber = RemoveLastDigit(n);
 int userCount = 0; 
 while (userCountNumber > 0)
 {
   userCountNumber= userCountNumber/ 10;
   userCount++;
 }
 userCount = userCount + 1;
 return(userCount);
}
int SumDigits (int n)
{
 int userSumNumber = RemoveLastDigit(n);
 int userSum = 0;
 while (userSumNumber!= 0)
 {
  userSum = userSum + (userSumNumber % 10);
  userSumNumber= userSumNumber/ 10;
 }
 userSum = userSum + LastDigit(n);
 return(userSum);
}
int Reverse (int n)
{
 int ReverseFinalNumber;
 int ReverseNumber = 0;
 int Reverse;
 while (n != 0)
 {
  Reverse = LastDigit(n);
  ReverseNumber = ReverseNumber * 10 + Reverse;
  ReverseFinalNumber = RemoveLastDigit(n);
  n = ReverseFinalNumber;
 }
 return(ReverseNumber);
}
bool IsPalindrome (int n)
{
  bool Result;
  Result = 1;
  int PalindromeValue;
  PalindromeValue = Reverse(n);
  if (n != PalindromeValue)
  {
    Result = 0;
  }
 return(Result);
}
void userRun()
{
int userReturn;
int userChoice;
do {
userMenu();
std:: cout << "Choice: ";
std:: cin >> userChoice;
 if (userChoice == 1)
 {
 int userNumber1;
 std:: cout << "Enter the number : ";
 std:: cin >> userNumber1;
 RemoveLastDigit(userNumber1);
 userReturn = CountDigits(userNumber1);
 std:: cout << "Digits in a number: " << userReturn << std:: endl;
 }
else if (userChoice == 2)
 {
 int userNumber2;
 std:: cout << "Enter the number : ";
 std:: cin >> userNumber2;
 RemoveLastDigit(userNumber2);
 LastDigit(userNumber2);
 userReturn = SumDigits(userNumber2);
 std:: cout << "Sum: " << userReturn << std:: endl;
 }
else if (userChoice == 3)
 {
   int userPalindromeValue;
   std:: cout << "Enter a number: ";
   std:: cin >> userPalindromeValue;
   if (IsPalindrome(userPalindromeValue) == 1)
   {
     std:: cout << "True!" << std:: endl;
   }
   else 
   {
     std:: cout << "False!" << std:: endl;
   }
 }
else if (userChoice == 4)
 { 
   int userReverseValue;
   std:: cout << "Enter a number: ";
   std:: cin >> userReverseValue;
   userReturn = Reverse(userReverseValue);
   std:: cout << "Reverse Value: " << userReturn << std:: endl;
 }
else if (userChoice <= 0 || userChoice > 5)
 {
   std:: cout << "Invalid choice!" << std:: endl;
 }
   }while (userChoice != 5);
}
int main()
{
  userRun();
}