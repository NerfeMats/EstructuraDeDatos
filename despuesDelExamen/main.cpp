#include <iostream>

using namespace std;

class cNodo{
public:
int i;
cNodo * sig;

cNodo(int p)
{
this->i = p;
this->sig=NULL;
}

void imprimir()
{

    cout<<"información: "<<i<<endl;
}
};

class cListaLigada
{
public:
cNodo* inicio;
cNodo* mifinal;
cListaLigada()
{
inicio=NULL;
mifinal=NULL;
}

bool estaVacia()
{
    //if(inicio==NULL)
    //    return true;
    //else
    //    return false;
    return (inicio==NULL)?true:false;

}

void agregarInf(int i){

if(estaVacia())
    {inicio = new cNodo(i);
      mifinal=inicio;
    }
else{

      cNodo* nuevofinal = new cNodo(i);
      mifinal->sig  = nuevofinal;
      mifinal = mifinal->sig;
}
}

void agregarInfSiempreAlInicio(int i){

if(estaVacia())
    {inicio = new cNodo(i);
      mifinal=inicio;
    }
else{
    cNodo* nuevoinicio = new cNodo(i);
    nuevoinicio->sig=inicio;
    inicio=nuevoinicio;

}

}

void imprimir(){

if(!estaVacia())
{
cNodo* aux = inicio;

while(aux!=NULL)
{
    aux->imprimir();
    aux=aux->sig;
}

}else
cout<<"la lista esta vacia"<<endl;


}

int quitarPrimerElemento()
{
 int p = inicio->i;
 cNodo* aux = inicio;
 inicio=inicio->sig;
 aux->sig = NULL;
 delete aux;
 return p;
}

void quitarElFinal()
{

cNodo* aux=inicio;
if(!this->estaVacia())
{
    if(aux->sig!=NULL)
    {
        while(aux->sig->sig!=NULL)
        aux=aux->sig;
        aux->sig = NULL;
        delete this->mifinal;
        this->mifinal = aux;
    }
    else {

        //cout<<"hay un solo elemento"<<endl;
        inicio=NULL;
    }
}
else
    cout<<"Lista vacia"<<endl;



}



bool buscar(int i)
{

if(!estaVacia())
{
cNodo* aux= inicio;

while(aux!=NULL)
{
if(i==aux->i)
    return true;
aux=aux->sig;
}

return false;
}
else
{
    cout<<"lista vacia"<<endl;
     return false;
}


}


};

int main()
{
    cListaLigada* l1 = new cListaLigada;
    for(int i=0; i<20;i++)
    l1->agregarInf(i);
    l1->imprimir();
    cout<<"se elimina el elemento: "<<l1->quitarPrimerElemento()<<endl;
    l1->imprimir();
    cout<<"agregar otro\n";
    l1->agregarInf(20);
    cout<<"Eliminar el final"<<endl;
    l1->quitarElFinal();
    l1->quitarElFinal();
    l1->quitarElFinal();
    l1->imprimir();

    cout<<"______________________"<<endl;

    system("pause");
    cListaLigada* l2 = new cListaLigada;
    l2->agregarInf(0);
    l2->agregarInf(1);
    l2->imprimir();
    l2->quitarElFinal();
    l2->imprimir();

    system("pause");

cout<<"_________________"<<endl;
    cListaLigada* l3 = new cListaLigada;
    for(int i=0; i<1000;i++)
    l3->agregarInf(i);
    l3->imprimir();

   // if(l3->buscar(1000)==true)
      if(l3->buscar(1000))
        cout<<"se encontro informacion"<<endl;
    else
        cout<<"la informacion no se encontro";


    return 0;
}
