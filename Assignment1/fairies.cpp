#include "fairies.h"


fairies::fairies(): Magical_Beeing(),m_number_of_wings(4){}
fairies::fairies(std::string name, int age): Magical_Beeing(name,age),m_number_of_wings(4){}
    fairies::~fairies(){}
   void fairies::fairies_magic()
   {
       std::cout <<"Magicali Magicalu Magicalo this is fairy magic"<<std::endl;
   }

