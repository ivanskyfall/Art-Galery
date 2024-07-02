#include "Artwork.h"
#include <iostream>
using namespace std;

#ifndef PICTURE_H
#define PICTURE_H




class Picture: public Artwork{
    string style;
    string technique;
    string artist_school;

    void generateID();

    public:
    
    void set_sytle(string);
    void set_technique(string);
    void set_art_school(string);


    string get_style();
    string get_technique();
    string get_art_school();    

    Picture(string, string, string, string, float, int);
    ~Picture();


};

#endif
