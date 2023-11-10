#ifndef COOL_STRING_H
#define COOL_STRING_H
#include <iostream>
class CoolString
{
	private:
	char* m_array;
	int m_size;
	
	public:
      //creates array of given size, stores size
	CoolString(int size); 

      //makes deep copy
	CoolString(const CoolString& original); 

     //delete array
	CoolString(); 

     //returns the size of the array 
	int size() const; 

     //return the character at an index
	char getAt(int index) const; 

      //stores character at an index
	bool setAt(int index, char entry); 

      // returns true is same size and all 
      //value are in the same order 
	bool operator==(const CoolString& rhs) const; 
                                                                                     
      //returns true if not the same (either differing size or 
      //values)
	bool operator!=(const CoolString& rhs) const; 
};
#endif
