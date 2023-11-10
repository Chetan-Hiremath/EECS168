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


//The error is that the program is showing 4 instead of 6 for the value 3. In the for loop, i is 1 and is less than the input n. Because of this it is showing the wrong value. Since this is a factorial calculation, I change the for loop. Now, i is 2 and is less than or equal to 1. After testing the program, the value of 3 is 6. I use the other values, and they are same as the factorial values. Therefore, the error is fixed. 



