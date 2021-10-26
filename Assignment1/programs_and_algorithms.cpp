
#include  "header.h"

//Point 5 : Passing the object by value
void passing_object_by_value( nature_fairies a_fairy)
{
    a_fairy.transform_human_age();
}
// POint 5 : Passing the object by reference
void passing_object_by_reference(nature_fairies& a_fairy)
{
    a_fairy.transform_human_age();
}
// Point 6 : passing the object to a function by constant reference.

void passing_object_by_constant_reference(const nature_fairies& a_fairy)
{
    std::cout << "The age of the constant fairy is "; // Point 6 : The function  see_age has to be a constant
    a_fairy.see_age(); ///13
    std::cout <<"This fairy can't take age, she is a constant"<<std::endl;

}
// Point 7 : operating with an object using pointers
void attack_fire_fairy(fire_fairies &Stella)
{
    Stella.fairies_magic();
}
// Point 8 : Display of the array
void see_the_school(fire_fairies school_of_fairies[3])
{
    std::cout << "School ? let's test your magic :"<< std::endl;
    for (int i =0; i<3; i++)
    {
        school_of_fairies[i].fairies_magic();  //Display every fire_fairy
    }
    std::cout <<std::endl;
}

// Point 10 : dynamic binding
void test_dynamic_binding()
{
    nature_fairies Natura("Natura", 100);
    fire_fairies Firera ("Firera", 102);
    //  Point 10 : the function fairy magic is a function of the mother class fairy, but is implemented in the two child class
    // They apply both the function slightly differently
    Natura.fairies_magic();///Magicali Magicalu Magicalo planty planto this is nature fairy magic
    Firera.fairies_magic(); /// Magicali Magicalu Magicalo firy firo this is fire fairy magic
}

struct orque // Point 17 : difference between a structure and a class
{
    int age; // Point 17 : all the attribut of a structure are in public, we have the possibility to change them in a fonction
    std::string name;

};
void main_routine()
{
    int age =29;
    std::string nom = "Flora";
    nature_fairies Flora (nom,age);
    //Point 5 passing an object by value and by reference
    std::cout <<"The age of "<<nom<<"before is ";
    Flora.see_age(); ///29
    passing_object_by_value(Flora); //  Point 5 :We modify the age of the object passed
    std::cout << "the new age with te object passed by value is " ;
    Flora.see_age(); ///29
    // Point 5 :And we see the state of the object
    passing_object_by_reference(Flora);
    std::cout << "the new age with the object passed by reference is ";
    Flora.see_age(); ///10
    /*  Point 5 :We can see that when we passed the object by value the object didn't change, and when we passed
     it by reference it changed : One does a copy and modify the copy the other pass the address and modify the object
    */
    age = 13;
    nom = "Musa";
    //Point 6 creating a constant qualified
    const nature_fairies Musa(nom,age);
    passing_object_by_constant_reference(Musa); // Point 6 : and passing it to a fonction

    // Point 7 : correct use of new and delete
    fire_fairies *Stella = new fire_fairies("Stella", 105);
    std::cout <<"Stella has before her attack this quantity of magic : ";
    Stella->see_quantity_of_magic(); // Operation using pointers ///100
    attack_fire_fairy(*Stella);///Magicali Magicalu Magicalo firy firo this is fire magic
    std::cout <<"Stella has before her attack this quantity of magic : ";
    Stella->see_quantity_of_magic(); // Operation using pointers ///95
    delete Stella; //Point 9 : first use of a destructor

    // Point 8 : creating an array of pointers to object
    fire_fairies *school_of_fairies = new fire_fairies[3];

    school_of_fairies[0] =  fire_fairies("Techna",9);
    school_of_fairies[1] = fire_fairies("Bloom", 8);
    school_of_fairies[2] = fire_fairies("Laila", 11);
    see_the_school(school_of_fairies);
    for (int i =0 ; i<3; i++)
    {
        delete &school_of_fairies[i];
    }
    // Point 10 : dynamic binding
    test_dynamic_binding();

    orque an_orque;
    an_orque.age = 1000;
    // Point 14 : modified copy constructor :
    witches Morphea; // Point 14 : we create a witch
    Morphea.quantity_evilness(); // She has 666 quantity of evilness
    witches Malificient = Morphea;// Point 14 : We copy this witch
    Malificient.quantity_evilness();//And now her copy has 667 quantity of evilness
    std::cout << std::endl;
    // Point 15 : two explicit cast :
    float magical_number = 1235.34562;
    double double_magical = 16426.902;
    int magical_cast;
    char magical_char;
    magical_cast = (int) magical_number; // Point 15 : putting the cast to have an integer with a float
    std::cout << "The magical cast return " << magical_cast<<std::endl; ///The magical cast return 1235
    magical_char = (char) double_magical;
    std::cout << "The magical cast return " << magical_char <<std::endl;/// The magical cast return *
    //Point 16 : creating mixed magical beeing
    mixed_magical magimix;
    mixed_magical migimix;
    int counter = migimix.return_mixt_magical();
    std::cout <<"There is "<<counter <<" mixed magical beeing" <<std::endl; // Point 16 : the counter has incremented
// Point 17 : possibility to access attribute of the structure outside of the structure
    std::cout << "age of the orque"<< an_orque.age << std::endl;
    // Point 17 to see the age of an object you need to create a function in the class to access the attribute :
    std::cout << "age of nature fairy " ;
    Musa.see_age();

    // Point 19 : vector
    std::vector <nature_fairies> Alliance_of_fairies; // POint 19 : creation of the vector
    Alliance_of_fairies.push_back(Flora); // POint 19 : putting elements in the vector
    nature_fairies Melissa("Melissa", 1245);
    Alliance_of_fairies.push_back(Melissa);
    Alliance_of_fairies.pop_back(); // POint 19 : emptying the vector
    Alliance_of_fairies.pop_back();

} // Point 9 : At the end of a scope the destructor is automaticly called to destroy the simple object created (Musa and Flora here)

