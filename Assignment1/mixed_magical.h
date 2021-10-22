#ifndef MIXED_MAGICAL_H_INCLUDED
#define MIXED_MAGICAL_H_INCLUDED
#include "fairies.h"
#include "witches.h"
#include <iostream>
class mixed_magical : public fairies, public witches
{
private :
    int magical_percentage;
public :
    mixed_magical();
    ~mixed_magical();
    void fairies_magic();
};


#endif // MIXED_MAGICAL_H_INCLUDED
