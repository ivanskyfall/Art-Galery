#include <string.h> 
#include <string>
using namespace std;

#ifndef ARTWORK_H
#define ARTWORK_H

class Artwork{
    protected:

    int id[6];
    string title;
    float price;
    int years_old;

    public:
    void set_title(string);
    void set_price(float);
    void set_years_old(int);

    string get_id();
    string get_title();
    float get_price();
    int get_years_old();
};

#endif 
