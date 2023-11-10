#include <iostream>

int main()
{

char letters[50];
for (int i = 0; i <= 50; i++)
{ 
     std:: cout << "Enter letters: ";
     std:: cin >> letters[i];
   for (int j = 0; j <= 50; j++)
   {
     if (letters[i] == 'b' && letters[i+1] == 'o' && letters[i+2] == 'o')
     {
         std:: cout << "Aah!" << std:: endl;
     }
     else if (letters[i] != 'b' && letters[i] != 'o' && letters[i] != 'o')
     {
         std:: cout << "Phew!" << std:: endl;
     }
   }
}

}
