#include "witches.h"
#include "string"
#include "Magical_Beeing.h"
#include <iostream>
//Constructor
witches::witches() : Magical_Beeing(), m_evilness_quantity(666){} // POint 11 : overload
  witches::witches(std::string hogwarts_house,std::string name) : Magical_Beeing()
    {
        m_hogwarts_house=hogwarts_house;

    }
    //Point 14 : modified copy constructor
witches::witches(const witches &sourceWitches) :m_evilness_quantity(sourceWitches.m_evilness_quantity +1){}
//Destructor
    witches::~witches(){}
//Other functions
    void witches::breath_under_water()
    {
    }
    void witches::general_witch_magic()
    {
        std::cout <<" Witchy witcho we earn more power ^^" << std::endl;
        m_quantity_of_magic += 10; // Point 11 : overlode operator

    }
void witches::quantity_evilness()
{
    std::cout <<"This witch has this quantity of evilness " << m_evilness_quantity <<std::endl;
}
