#include "Artwork.h"
#include <iostream>
using namespace std;

#ifndef SCULPTURE_H
#define SCULPTURE_H


enum class Size{
    Pequeño = 1,
    Mediano = 3,
    Grande = 5
};

class Sculpture: public Artwork{
    string material;
    Size size;
    bool is_replic;

    void generateID();

    public:
    
    void set_material(string);
    void set_size(Size);
    void set_is_replic(bool);


    string get_material();
    Size get_size();
    bool get_is_replic();    

    Sculpture(string, Size, bool, string, float, int);

};

#endif 