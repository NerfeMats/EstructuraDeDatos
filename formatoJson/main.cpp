#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


class cPelicula{
public:
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


//si exito al abrir el archivo mandar msg
//ino error al abrir el archivo

}

void toConsole()
{
cout<<this->id<<endl;
cout<<this->name<<endl;
cout<<this->picture<<endl;
cout<<this->likes<<endl;
cout<<this->webSite<<endl;
cout<<this->description<<endl;
}

void toJson()
{

}



};

// generar una lista doblemente de Peliculas

class cNodo{
public:
cPelicula * pelicula;
// int n;
cNodo*sig;
cNodo*ant;
// escribir constructores

public:
cNodo(cPelicula* p){
pelicula=p;
sig=NULL;
ant=NULL;

}


void imprimir()
{
pelicula->toConsole();
}


};

class cListaPeliculas{
cNodo * inicial;

public:
void agregarPeliculas();
void eliminarPeliculas();
void peliculasToJson();
};

void cListaPeliculas::agregarPeliculas(){
ifstream miEntrada("entrada.txt");

string id;
string name;
string picture;
int likes;
string webSite;
string description;



try{

if(miEntrada.fail())
    throw 5;
cout<<"exito al abrir el archivo"<<endl;
cNodo* aux;

string basura;
miEntrada>>id;
getline(miEntrada,basura);
getline(miEntrada,name);
miEntrada>>picture;
miEntrada>>likes;
miEntrada>>webSite;
miEntrada>>description;
inicial = new cNodo(new cPelicula(id, name, picture, likes, webSite, description));
aux=inicial;

inicial->pelicula->toConsole();
system("pause");
while(!miEntrada.eof())
{
miEntrada>>id;
getline(miEntrada,basura);
getline(miEntrada,name);
miEntrada>>picture;
miEntrada>>likes;
miEntrada>>webSite;
miEntrada>>description;
cout<<"0";
aux->sig = new cNodo(new cPelicula(id, name, picture, likes, webSite, description));
aux=aux->sig;


}

}
catch(int p){


cout<<"error al abrir el archivo: error  numero: "<<p;

}

}

void cListaPeliculas::peliculasToJson()
{



}

int main()
{
    cListaPeliculas misMoviesFavoritas;

    misMoviesFavoritas.agregarPeliculas(); //
    misMoviesFavoritas.peliculasToJson();
    cout << "Hello world!" << endl;
    return 0;
}
