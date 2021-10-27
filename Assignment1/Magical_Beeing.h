#ifndef MAGICAL_BEEING_H_INCLUDED
#define MAGICAL_BEEING_H_INCLUDED
#include <string>
class Magical_Beeing
{
protected :
    std::string m_name;
    int m_age;
    int    m_quantity_of_magic;
    int m_health;
public :
    Magical_Beeing();
    ~Magical_Beeing();
    Magical_Beeing(std::string name, int age);
    int get_age();
    int get_quantity_of_magic();
    void set_health(int new_age);
    Magical_Beeing calculating_health(Magical_Beeing A_being); //Point 12 and 13

};
#endif // MAGICAL_BEEING_H_INCLUDED

