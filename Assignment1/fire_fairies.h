#ifndef FIRE_FAIRIES_H_INCLUDED
#define FIRE_FAIRIES_H_INCLUDED
#include "fairies.h"
#include <iostream>
class fire_fairies : public fairies // Point 1 inheritance
{
public :
    fire_fairies();
    fire_fairies(std::string name, int age);
    ~fire_fairies();
    void fairies_magic();
    void see_quantity_of_magic() const;
};

#endif // FIRE_FAIRIES_H_INCLUDED
