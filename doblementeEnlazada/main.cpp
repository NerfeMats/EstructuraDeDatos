#include <iostream>

using namespace std;


class cNodo{
int data;

cNodo* sig;
cNodo* ant;

public:
cNodo(int d) : cNodo()
{
data=d;

}


cNodo(){
sig=NULL;
ant=NULL;

}
void imprimir()
{
cout<<"data: "<<data<<endl;
}
friend class cListaDL;
};


class cListaDL{
cNodo* nodoI, *nodoF;

public:
    cListaDL()
    {
    nodoI=NULL;
    }

    bool esVacia(){

    return (nodoI==NULL)?true:false;
    }

    void miPushEnd(int i){
    if(esVacia())
    {
       nodoI=new cNodo(i);
       nodoF=nodoI;
    }
    else
    {
      cNodo*aux= new cNodo(i);
      nodoF->sig =aux;
      aux->ant=nodoF;
      //nodoF=nodoF->sig;
      nodoF=aux;

    }


    }


   bool buscar(int i)
   {cNodo *aux = nodoI;
     while(aux!=NULL)
      {  if(aux->data==i)
        return true;
      aux=aux->sig;
      }
    return false;
   }


   void borrar(int aBorrar)
   {

      if(buscar(aBorrar)==true)
      {
        cNodo *aux = nodoI;
        if(aux->data==aBorrar)
        {
        nodoI=aux->sig;
        nodoI->ant->sig=NULL;
        nodoI->ant=NULL;

        }


      }
      else
        cout<<"no se encontro el elemento a borrar";


   }

    void miPushFront(int i){
    if(esVacia())
    {
       nodoI=new cNodo(i);
       nodoF=nodoI;
    }
    else
    {
      cNodo*aux= new cNodo(i);
      aux->sig=nodoI;
      //nodoI->ant=aux;
      nodoI=aux;

    }


    }



 void imprimir(bool reversa=true){

 cNodo* aux=nodoI;
cout<<"Tus datos son: "<<endl;


 if(aux!=NULL)
 {
    if(reversa==true)
     while(aux!=NULL)
     {
       aux->imprimir();
       aux=aux->sig;
     }
     else{
        aux=nodoF;
        while(aux!=NULL)
        {
       aux->imprimir();
       aux=aux->ant;
        }

     }

 }
 else
    cout<<"Lista vacia";


 }

} ;

class problemaQueNeedDTDL{
cListaDL midoblementeL;

public:
void leerDatos(){

bool reversa;
for(int i=0; i<10;i++)
    midoblementeL.miPushEnd(i);

midoblementeL.imprimir();
//  // se manda false porque se imprime del ultimo que entre al primero
midoblementeL.borrar(0);
midoblementeL.imprimir();
midoblementeL.imprimir(reversa=false);
}

};


int main()
{

    problemaQueNeedDTDL miproblema;
    miproblema.leerDatos();

    cout << "Hello world!" << endl;
    return 0;
}
