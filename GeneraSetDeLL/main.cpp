#include <iostream>

using namespace std;

class cNodo{
public:
int i;
cNodo * sig;

cNodo()
{
this->sig=NULL;
}
cNodo(int p)
{
this->i = p;
this->sig=NULL;
}

void imprimir()
{

    cout<<"informacion: "<<i<<endl;
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

class cMySet{
public:
cNodo* nvonodo;

cMySet(cListaLigada * lista)
{
    nvonodo=NULL;
   convertirAconjunto(lista);

}
//cMySet(){
//nvonodo=NULL;
//}

bool buscarEnNvaLis(int var){
bool encontrado;
if(nvonodo==NULL)
    encontrado=false;
else {
cNodo *aux = nvonodo;
    while(aux!=NULL )
    {
      if(var==aux->i){
        return true;
      }

    aux=aux->sig;
    }
    encontrado=false;
}
return encontrado;
}

void insertar(int var){

if(nvonodo==NULL)
{
nvonodo = new cNodo(var);
}
else{
    cNodo* aux = new cNodo(var);
    aux->sig = nvonodo;
    nvonodo = aux;
}


}

void convertirAconjunto(cListaLigada* lis)
{


cNodo* aux=lis->inicio;
int ii;
while(aux!=NULL)
{
    ii=aux->i;
    if(buscarEnNvaLis(ii)==false) // significa que no esta en la lista
        {//cout<<ii<<endl;
          insertar(ii);
        }
      //ya esta en la lista y no se inserta
        aux=aux->sig;
}


//recorrer la lista
// tomo el elemento que corresponda y si no esta en la nueva lista lo agrego
// en caso contrario continuar


}

bool estaVacia()
{
    //if(inicio==NULL)
    //    return true;
    //else
    //    return false;
    return (nvonodo==NULL)?true:false;

}
void imprimir()
{

if(!estaVacia())
{
cNodo* aux = nvonodo;

while(aux!=NULL)
{
    aux->imprimir();
    aux=aux->sig;
}

}else
cout<<"mi conjunto esta vacio"<<endl;


}


};





int main()
{

cListaLigada* milista = new cListaLigada;
for(int i=0;i<4;i++)
    milista->agregarInf(1);
for(int i=0;i<3;i++)
    milista->agregarInf(10);
for(int i=0;i<3;i++)
    milista->agregarInf(11);
 milista->agregarInf(12);
 milista->imprimir();
system("pause");

cMySet* miconjunto = new cMySet(milista);
miconjunto->imprimir();



/*
milista->imprimir();
system("pause");
milista->convertirAconjunto();
milista->imprimirSet();

*/


    return 0;
}
