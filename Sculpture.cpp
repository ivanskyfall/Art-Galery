#include "Sculpture.h"
#include "Artwork.h"
#include <iostream>
using namespace std;



void Sculpture::set_material(string _material){
    material = _material;
}
void Sculpture::set_size(Size _size){
    size = _size;
};
void Sculpture::set_is_replic(bool _is_replic){
    is_replic = _is_replic;
};


string Sculpture::get_material(){
    return material;
}

Size Sculpture::get_size(){
    return size;
}

bool Sculpture::get_is_replic(){
    return is_replic;
}   


void Sculpture::generateID(){
    id[0] = '9';
    for (int i = 1; i < 7; i++){
        id[i] = '0' + rand() % 10;
    }
}

Sculpture::Sculpture(string _material, Size _size, bool _is_replic, string _title, float _price, int _years_old){
    material = _material;
    size = _size;
    is_replic = _is_replic;
    title = _title;
    price = _price;
    years_old = _years_old;
    generateID();
}


