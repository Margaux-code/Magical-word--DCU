#ifndef WITCHES_H_INCLUDED
#define WITCHES_H_INCLUDED

#include "Magical_Beeing.h"
#include <string>

 class witches : public Magical_Beeing
{
private :
    std::string m_hogwarts_house;
public :
    witches(std::string hogwarts_house,std::string name);
    witches();
    ~witches();
    void breath_under_water();
    void genral_witch_magic();
};


#endif // WITCHES_H_INCLUDED
