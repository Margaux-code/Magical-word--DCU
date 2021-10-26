#ifndef FAIRIES_H_INCLUDED
#define FAIRIES_H_INCLUDED
#include "Magical_Beeing.h"
#include <iostream>
class fairies : public Magical_Beeing // Point 3 : Abstract class
{
protected :
    int m_number_of_wings;
public :
    fairies();
    fairies(std::string name, int age);
    virtual ~fairies();
    virtual void fairies_magic() =0; // Point 10 : Dynamic binding


};

#endif // FAIRIES_H_INCLUDED
