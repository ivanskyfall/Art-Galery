#include <iostream>
#include "list.h"
#include "Artwork.h"
#include "Picture.h"
#include "Sculpture.h"
#include "System.h"

using namespace std;



string System::newTitle(){ 
    string _title = "";
    cout << "Inserte el Titulo de la Obra: " << endl; //í
    //_title = catchstring()
    return _title;
}

int System::newPrice(){
    int _price = 0;
    cout << "Inserte el Precio de la Obra: " << endl;
    //_price = catchint()

    return _price;
}

int System::newAge(){
    int _age = 0;
    cout << "Inserte los anios antiguedad de la Obra: " << endl; //ñ ü
    //_age = catchint()

    return _age;
}

string System::newStyle(){
    string _style = "";
    cout << "Inserte el estilo de la Obra: " << endl; //í
    //_style = catchstring()
    return _style;

}

string newTechnique(){
    string _technique = "";
    cout << "Inserte la tecnica usada en la Obra: " << endl; //é
    // _technique = catchstring()

    return _technique;
}

string newArtist_school(){
    string _artist_school = "";
    cout << "Inserte la escuela a la que pertenece la pintura: "<< endl;

    // _artist_school = cacthstring();

    return _artist_school;
}


