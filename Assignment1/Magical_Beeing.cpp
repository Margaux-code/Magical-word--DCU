#include "Magical_Beeing.h"
//Constructor
Magical_Beeing::Magical_Beeing(){}
Magical_Beeing::Magical_Beeing(std::string name, int age)
{
    m_name =name;
    m_age=age;
    m_quantity_of_magic= 100;
    m_health=100;
}

//Destructor
Magical_Beeing::~Magical_Beeing(){}

