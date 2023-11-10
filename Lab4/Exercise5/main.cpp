#include <iostream>

int main()
{

int userDay;
int userDay1 = 1;
int userDay2 = 5;
int userDay3 = 17;
int Sum;
std:: cout << "OUTBREAK!" << std:: endl;
std:: cout << "What day do you want a sick count for?: ";
std:: cin >> userDay;
if (userDay <= 0)
{
  std:: cout << "Invalid day." << std:: endl;
}
else if (userDay == 1)
{
  std:: cout << "Total people with flu: " << userDay1 << std:: endl;
}
else if (userDay == 2)
{
  std:: cout << "Total people with flu: " << userDay2 << std:: endl;
}
else if (userDay == 3)
{
  std:: cout << "Total people with flu: " << userDay3 << std:: endl;
}
for (int i = 4; i <= userDay; i++)
{
Sum = userDay1 + userDay2 + userDay3;
userDay1 = userDay2;
userDay2 = userDay3; 
userDay3 = Sum;
}
if (userDay >= 4)
{
std:: cout << "Total people with flu: " << Sum << std:: endl;
}

}
