#ifndef WITCHES_H_INCLUDED
#define WITCHES_H_INCLUDED

#include "Magical_Beeing.h"
#include <string>

 class witches : public Magical_Beeing // Point 1 :Inheritance
{
protected :
    std::string m_hogwarts_house;
    int m_evilness_quantity;
public :
    witches(std::string hogwarts_house,std::string name);
    witches(const witches &sourceWitches); //Point 14 : modified copy constructor
    witches();
    ~witches();
    void breath_under_water();
    void general_witch_magic();
    void quantity_evilness();
};


#endif // WITCHES_H_INCLUDED
