#include <fstream>
#include <iostream>

int main()
{
  int x=0;
  int y=0;
  int z=0;
  std::ifstream inFile; //create a variable of type std::ifstream. It will enable reading from files.
  inFile.open("someFile.txt"); //open a file that has values in it
  
  //Check if file is open
  if(inFile.is_open())
  {
    inFile >> x; //Read a value from the file and put it in the variable x
    inFile >> y; //Read a value from the file and put it in the variable y
    inFile >> z; //Read a value from the file and put it in the variable z
  
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "z = " << z << '\n';

    inFile.close(); //we're done using the file.
  }
  else
  {
     std::cout << "File could not be opened!\n";
  }
  return(0);
}