#include "mixed_magical.h"

mixed_magical::mixed_magical() : fairies(), witches()  {++m_number_mixt_magical;} // Point 16 : incrementation of the static variable
mixed_magical::~mixed_magical(){--m_number_mixt_magical;}// Point 16 : decrementation of the static variable
int mixed_magical::m_number_mixt_magical = 0; // Point 16 : declaration of the static function at 0
int mixed_magical::return_mixt_magical()
{
    return m_number_mixt_magical;
}
void mixed_magical::fairies_magic()
{
    std::cout << "Magicali Magicalu Magicalo witchy witcho this is witch and fairy magic" <<std::endl;
}
