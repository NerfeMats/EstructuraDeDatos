#include <iostream>

using namespace std;
class cNodo{
public:
string materia;
string clave;

cNodo* sig;

cNodo(string m1, string c1){
materia=m1;
clave=c1;
}

void imprimir()
{
cout<<endl;
cout<<"materia: "<<materia<<endl;
cout<<"clave: "<<clave<<endl;
cout<<endl;
}

};

int main()
{

    cNodo* aux=NULL;
    cNodo primero("Fisica","ABCDfisica");
    aux=&primero;
    aux->imprimir();


    primero.sig=new cNodo("Calculo","ABCDCalculo");
    aux=aux->sig;
    aux->imprimir();

    primero.sig->sig=new cNodo("Quimica","ABCDQuimica");
    aux=aux->sig;
    aux->imprimir();


    primero.sig->sig->sig=new cNodo("Electronica", "ABCDElectronica");
    aux=aux->sig;
    aux->imprimir();






    return 0;
}
