#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

class cCoordenada{
    public:
int x,y;

cCoordenada(int x, int y)
{
this->x=x;
this->y=y;
}
cCoordenada(){

}
};

class cNodo{
public:
cCoordenada coord;

cNodo(cCoordenada c)
{
this->coord=c;
sig=NULL;
}

cNodo * sig;

void imprimir()
{
cout<<"x:"<<coord.x<<" , "<<"y: "<<coord.y<<endl;
}

};


class cPila{
cNodo * head;
public:
    cPila(){
    head = NULL;
    }
    void miPush(cCoordenada c){

        if(head==NULL)
            head =new cNodo(c);
        else
        {
            cNodo* aux = new cNodo(c);
            aux->sig=head;
            head=aux;
        }


    }

    cCoordenada miPop(){
    return head->coord;
    }

    void miQuitar(){
    if(head!=NULL)
    {
    cNodo* aux= head;
      head=head->sig;
      aux->sig = NULL;
    }
     cout<<"no hay elementos en la pila"<<endl;

    }

    void imprimePila(){
    cNodo* aux = head;

    while(aux!=NULL)
        aux->imprimir();

    }


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
*(matriz+i) = new int[filas];
/**/
for(int i=0; i<filas;i++)
for(int j=0; j<columnas;j++)
matriz[i][j]=0;
//*(*(matriz+i)+j)=0;

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
cout<<":___________________"<<endl;

cPila mipila;
cCoordenada c(1,1);
cCoordenada c1(2,1);

mipila.miPush(c);
mipila.miPush(c1);
mipila.imprimePila();

    cout << "Hello world!" << endl;
    return 0;
}
