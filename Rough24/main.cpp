//Include the fstream library
#include <fstream>
#include <iostream>

int main()
{
     std::ofstream myOutFile;
     std::string fileName = "myOutputFile.txt";
     myOutFile.open(fileName); //You can pass in strings if you want

     int x = 99;
     
     //Put some stuff in the file
     myOutFile << "Text!\n"; //Just like cout, you pick when newline occur
     myOutFile << 42 << '\n'; //Numbers and characters!
     myOutFile << x << '\n'; //Variables!
     

     myOutFile.close(); //VERY important to do with output files
     
     return(0);

}
