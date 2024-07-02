#include "Picture.h"
#include "Artwork.h"
#include <iostream>
using namespace std;


void Picture::set_sytle(string _style){
        style = _style;
}

void Picture::set_technique(string _technique){
        technique = _technique;
}

void Picture::set_art_school(string _artist_schoool){
        artist_school = _artist_schoool;
}

string Picture::get_style(){
    return style;
}

string Picture::get_technique(){
    return technique;
}

string Picture::get_art_school(){
    return artist_school;
}


void Picture::generateID(){
    id[0] = '5';
    for (int i = 1; i < 7; i++){
        id[i] = '0' + rand() % 10;
    }
}

Picture::Picture(string _style, string _technique, string _artist_school, string _title, float _price, int _years_old){
    style = _style;
    technique = _technique;
    artist_school = _artist_school;
    title = _title;
    price = _price;
    years_old = _years_old;
    generateID();
}





    
    
    
    
    