#include <iostream>
#include "Artwork.h"
#include <string.h> 
#include <string>
using namespace std;



void Artwork::set_title(string _title){
    title = _title;
}

void Artwork::set_price(float _price){
    price = _price;
}

void Artwork::set_years_old(int _years_old){
    years_old = _years_old;
}

string Artwork::get_id(){
    string _id = "";
    for (char x: id){
            _id += x;
    }
    return _id;
}
string Artwork::get_title(){
    return title;
}
float Artwork::get_price(){
    return price;
}
int Artwork::get_years_old(){
    return years_old;
}

