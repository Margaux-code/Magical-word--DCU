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
void Magical_Beeing::set_health(int health)
{
    m_health = health;
}
int Magical_Beeing::get_age()
{
    return m_age;
}
int Magical_Beeing::get_quantity_of_magic()
{
    return m_quantity_of_magic;
}
//Point  13 : object passing itself to a function and non member operator
void non_member_operator(Magical_Beeing& A_beeing) // Passing the function by reference : it changes the object
{
    int age  = A_beeing.get_age();
    int quantity_of_magic = A_beeing.get_quantity_of_magic();
    int health =  quantity_of_magic - age; // Point 13 : non-member operator
     A_beeing.set_health(health);
}


Magical_Beeing Magical_Beeing::calculating_health( Magical_Beeing A_being)
{

    non_member_operator(A_being); // Point 12 a function passing itself to a function(by reference)
    // POint 12 : so it changes the state of this object
    return A_being;
}
