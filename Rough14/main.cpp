#include <iostream>

int main ()

{

for (int i = 1; i <= 5; i = i + 1)
{ 

    for (int j = 1; j <= 5; j = j + 1)
    {
        if ((i+j) % 2 == 0)
        {
           std:: cout << "a ";
        }
        else if ((i+j) % 2 == 1)
        {
           std:: cout << "b ";
        }
    }
  std:: cout << '\n';
}

}
