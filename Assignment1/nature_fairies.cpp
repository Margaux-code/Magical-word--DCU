#include "nature_fairies.h"

nature_fairies::nature_fairies() : fairies(){}
nature_fairies::nature_fairies(std::string name, int age) : fairies (name,age){}
nature_fairies::~nature_fairies() {}
void nature_fairies::fairies_magic() //Point 10 : dynamic binding
{
    std::cout <<"Magicali Magicalu Magicalo planty planto this is nature fairy magic" << std::endl;
    m_quantity_of_magic -= 5; // Point 11 : overload operator
    if (m_quantity_of_magic == 0) // Point 11 : overload operator
        m_quantity_of_magic += 100;
}
int nature_fairies::tonus_magic_minus_age()
{
    return(m_quantity_of_magic-m_age); //Point 11 : overload operator
}
//A fairy don't have the same life rate than a human
void nature_fairies::transform_human_age()
{
    m_age *= 0.35; // Point 11 : overload operator

}
void nature_fairies::see_age() const
{
    std::cout<<m_age<<std::endl;
}
