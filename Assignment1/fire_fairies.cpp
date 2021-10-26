#include "fire_fairies.h"

    fire_fairies::fire_fairies() : fairies() {}
    fire_fairies::fire_fairies(std::string name, int age) :fairies(name,age) {}
    fire_fairies::~fire_fairies(){}
    void fire_fairies::fairies_magic()
    {
        std::cout <<"Magicali Magicalu Magicalo firy firo this is fire fairy magic" << std::endl;
        m_quantity_of_magic -= 5; // Point 11 : overlode operator
    }
    void fire_fairies::see_quantity_of_magic() const
    {
        std::cout <<m_quantity_of_magic<<std::endl;
    }
