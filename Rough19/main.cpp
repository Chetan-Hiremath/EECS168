#include <iostream>

int main()
{
   int SIZE = 0;
   int* nums = nullptr;
   std:: cout << "Enter a size: ";
   std:: cin >> SIZE;
   nums = new int[SIZE];
   for (int i = 0; i < SIZE; i++)
   {
       nums[i] = (i+1) * 3;
   }
for (int i = 0; i < SIZE; i++)
   {
      std:: cout << nums[i] << std:: endl;
   }
}
