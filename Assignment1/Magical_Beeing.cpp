#include "Magical_Beeing.h"


//Constructor
Magical_Beeing::Magical_Beeing(){}
Magical_Beeing::Magical_Beeing(std::string name, int age,int quantity_of_magic, int health)
{
    m_name =name;
    m_age=age;
    m_quantity_of_magic= quantity_of_magic;
    m_health=health;
}

//Destructor
Magical_Beeing::~Magical_Beeing(){}

