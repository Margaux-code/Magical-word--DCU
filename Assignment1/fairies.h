#ifndef FAIRIES_H_INCLUDED
#define FAIRIES_H_INCLUDED
#include "Magical_Beeing.h"
#include <iostream>
class fairies : public Magical_Beeing
{
public :
    fairies();
    virtual ~fairies();
    virtual void fairies_magic() =0;


};

#endif // FAIRIES_H_INCLUDED
