#ifndef NATURE_FAIRIES_H_INCLUDED
#define NATURE_FAIRIES_H_INCLUDED
#include "fairies.h"
#include <iostream>
class nature_fairies : public fairies
{
public :
    nature_fairies();
    nature_fairies(std::string name, int age);
    ~nature_fairies(); // Point 9 : simple destructor
    void fairies_magic();
    void transform_human_age();
    void see_age() const;
    int tonus_magic_minus_age();
};

#endif // NATURE_FAIRIES_H_INCLUDED
