#include <iostream>
#include "list.h"
#include "Artwork.h"
#include "Picture.h"
#include "Sculpture.h"

using namespace std;



class System {
    List<Picture>pictures;
    List<Sculpture>sculptures;

    public:

    //Artworks
    string newTitle(); //Pide al usuario un título de una obra de arte
    int newPrice(); //Pide al usuario un precio de una obra de arte
    int newAge(); //Pide al usuario el año de antiguedad de una obra de arte


    //Pictures
    string newStyle(); //Pide al usuario el estilo de una pintura
    string newTechnique(); //Pide al usuario la tecnica usada en una pintura
    string newArtist_school(); //Pide al usuario la escuela de artista






};



