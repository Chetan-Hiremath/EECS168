#include <iostream>
using namespace std;

int main()
{

int n = 0;
cout << "Enter a number to find factorial: ";
cin >> n;
int factorial= 1;
for(int i = 2; i <= n; i++)
{
factorial = factorial * i;
}
cout << n << "! is " << factorial << ".\n";
return 0;

}






