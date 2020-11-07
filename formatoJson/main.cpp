#include <iostream>

using namespace std;


class cPelicula{
string id;
string name;
string picture;
int likes;
string webSite;
string description;

public:
cPelicula(string id, string name, string picture, int l, string wS, string descr)
{
this->id=id;
this->name= name;
this->picture = picture;
this->likes = l;
this->webSite=wS;
this->description=descr;
}
cPelicula()
{
ifstream miEntrada("entrada.txt");

si exito al abrir el archivo mandar msg
sino error al abrir el archivo

}

void toConsole()
{
cout<<this->id;
cout<<this->name;
cout<<this->picture;
cout<<this->likes;
cout<<this->webSite;
cout<<this->description;
}

void toJson()
{

}



};

// generar una lista doblemente de Peliculas

class cNodo{

cPelicula * pelicula;

cNodo*sig;
cNodo*ant;
// escribir constructores

void imprimir()
{
pelicula->toConsole();
}


};

class cListaPeliculas{
cNodo * inicial;


void agregarPeliculas();
void eliminarPeliculas();
void peliculasToJson();


};

int main()
{
    cListaPeliculas misMoviesFavoritas;

    misMoviesFavoritas.agregar(); //
    misMoviesFavoritas.peliculasToJson();
    cout << "Hello world!" << endl;
    return 0;
}
