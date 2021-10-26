#ifndef MIXED_MAGICAL_H_INCLUDED
#define MIXED_MAGICAL_H_INCLUDED
#include "fairies.h"
#include "witches.h"
#include <iostream>

class mixed_magical : public fairies, public witches //Point 1 : Multiple inheritance
{
private :
    static int m_number_mixt_magical; // Point 16 : static int counter of mixed magical beeing created
public :
    mixed_magical();
    ~mixed_magical();
    void fairies_magic();
    int return_mixt_magical();

};


#endif // MIXED_MAGICAL_H_INCLUDED
