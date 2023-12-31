#include "CoolString.h"

CoolString::CoolString(int size)
{
	//create an array of the given size
	//assumes size to be valid

	//Just for lecture, don't do this normally:
	std::cout << "Constructor called!\n";
	
	//store the size
	m_size = size;
	
	//create an array of the given size
	m_array = new char[m_size];
	
	//initialize the array
	for(int i=0; i<m_size;  i++)
	{
		m_array[i] = '\0';//null character
	}
}

CoolString::CoolString(const CoolString& original)
{
	//Just for lecture, don't do this normally:
	std::cout << "Copy Constructor called!\n";
	

	//Can access private members of the same class
	m_size = original.m_size;
	
	//deep copy of the array
	m_array = new char[m_size];
	
	for(int i=0; i<original.m_size; i++)
	{
		m_array[i] = original.m_array[i];
	}
}


CoolString::~CoolString()
{
	//Just for lecture, don't do this normally:
	std::cout << "Destructor called!\n";
	
	//Goal: delete everything this object put
	//on the heap
	delete[] m_array;
}

int CoolString::size() const
{
	return(m_size);
}

char CoolString::getAt(int index) const
{
	//Assume the index is valid
	return(m_array[index]);
}

bool CoolString::setAt(int index, char entry)
{
	//if the index is valid
	if(0 <= index && index < m_size)
	{
		//store the character at that index
		m_array[index] = entry;
		return(true);
	}
	else
	{
		//indicate failure
		return(false);
	}
}


bool CoolString::isSameSize(const CoolString& otherCS) const
{
	if(m_size == otherCS.size())
	{
		return(true);
	}
	else
	{
		return(false);
	}
}