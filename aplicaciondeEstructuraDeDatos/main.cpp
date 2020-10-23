#include <iostream>
#include <fstream>
using namespace std;

class cCoordenada{
    public:
int x,y;

};

class cNodo{

cCoordenada coord;

cNodo * sig;

};


class cPila{

public:
    cPila(){}

};

class cLaberinto{

cPila* pila;
cPila *aux;


int **matriz;
int filas, columnas;

public:
    cLaberinto(){}
cLaberinto(int filas, int columnas)
{
this->filas=filas;
this->columnas=columnas;
matriz = new int*[columnas];

for(int i=0;i<filas;i++)
matriz[i] = new int[filas];
/**/
for(int i=0; i<filas;i++)
for(int j=0; j<columnas;j++)
matriz[i][j]=0;

}


void resuelveLaberinto(){



}


void loadLaberinto(){
ifstream in("laberinto.txt");

if(in.is_open())
    {
    cout<<"exito al abrir el archivo"<<endl;
     in>>filas;
     in>>columnas;


        matriz = new int*[filas];

        for(int i=0;i<columnas;i++)
        matriz[i] = new int[columnas];

        for(int i=0; i<filas;i++)
        for(int j=0; j<columnas;j++)
        in>>matriz[i][j];
    }
else
    cout<<"error";


}


void imprimir(){
cout<<"\t";
for(int i=0; i<columnas;i++)
cout<<i<<"\t";
cout<<endl;
for(int i=0; i<7*columnas+15;i++)
cout<<"_";
cout<<endl;
for(int i=0;i<filas;i++)
    {
        cout<<i<<" "<<"|\t";
    for(int j=0; j<columnas;j++)
        cout<<matriz[i][j]<<"\t";

    cout<<endl;
    }

}

};
int main()
{
    cLaberinto milaberinto;

milaberinto.loadLaberinto();
milaberinto.imprimir();
milaberinto.resuelveLaberinto();
milaberinto.imprimir();

    cout << "Hello world!" << endl;
    return 0;
}
