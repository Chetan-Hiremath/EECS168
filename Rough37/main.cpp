#include <iostream>
#include <string>
#include "CoolString.h"

void func(CoolString cs)
{
    myCS.setAt(0, 'P');
    //FREEZE POINT, func has NOT returned yet!
    
    return;
}

int main()
{

    std::string word = "dogs";
    CoolString myCS( word.length() );

    for(int i=0; i< myCS.size(); i++)
    {
        myCS.setAt(i, word.at(i) );
    }

    myCS.setAt(0, 'L');

    func(myCS); 
    
    return(0);
}
