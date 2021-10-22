#include "witches.h"
#include "string"
#include "Magical_Beeing.h"
//Constructor
witches::witches() : Magical_Beeing(){}
  witches::witches(std::string hogwarts_house,std::string name) : Magical_Beeing()
    {
        m_hogwarts_house=hogwarts_house;

    }
//Destructor
    witches::~witches(){}
//Other functions
    void witches::breath_under_water(){}
    void witches::genral_witch_magic(){}
