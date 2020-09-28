#include <iostream>

using namespace std;

class cNodo{
private:     // especificador acceso
int data;                   //atributos
cNodo* sig;

public:    // especificador de acceso , tambien existen protected (herencia) private
cNodo(int d, cNodo* s = NULL)/*sig(NULL)*/{   //constructor
    data=d;
    sig=s;
   // sig = NULL;
   // cout<<"Estado inicial: "<<endl;
  //  imprimiNodo();  // imprimir el Estado inicial de mi objeto;

}

void setData(int d){

if(d>=0)
data=d;
else
    cout<<"ingresa otro numero con actitud positiva";
}

int getData(){          // interfaz de clase
return data;
}

cNodo* getSig(){
return sig;
}

void imprimirNodo()
{
cout<<"Nodo: "<<data<<endl;
cout<<"sig: "<<sig<<endl;

}

cNodo(){       // contructor

}

friend class cListaLigada;
//friend int main();
};


class cListaLigada{

cNodo * inicio;
cNodo* ultimo;
public:

 bool esVacia() // isEmpty
 {
  //if(inicio==NULL)
  //  return true;

 //else
   // return false;

 return (inicio==NULL)?true:false;


 }

cListaLigada(){
inicio=NULL;
ultimo=NULL;
}

void miPushFront(int value){  //PILA


if(esVacia()) // inicio==NULL => inicio==0 => 0==0 V  *f*****  !0 =1 y !1= 0
{           // !0 = 1  !1 = 0
inicio=new cNodo(value);
ultimo=inicio;
}
else
{
cNodo * aux = new cNodo(value);
aux->sig =inicio;
inicio=aux;


}

}

void miPushEnd(int value)  //COLA
{

if(esVacia()){

    inicio=new cNodo(value);
     ultimo=inicio;
}
else
{

ultimo->sig = new cNodo(value);
ultimo= ultimo->sig;
}


}

void insertar(int aInsertar, int posAIns){
cNodo* aux = new cNodo(aInsertar);
//aux->sig = inicio;
//inicio=aux;

ultimo->sig=aux;
ultimo=aux;



}

void imprimir(){
cNodo * aux = inicio;


while(aux!=NULL)
{
cout<<"***"<<endl;
aux->imprimirNodo();
aux=aux->sig;
}


}

bool buscar(int abuscar){

cNodo* aux = inicio;


//if(abuscar==aux->getData())
  //  return true;
//else
//{

while(aux!=NULL)
{

if(abuscar==aux->getData())
return true;


    aux=aux->sig;
}



//}

//objetivo buscar elemento en lista
//preguntar si elemento esta en el primer

//si esta regresar true

//si no esta buscar en el siguiente nodo

//si esta regresar true
//si no esta buscar en el siguiente nodo






return false;
}

};

class ProblemaQueRequiereUNED{
int v;
cListaLigada milista;
public:

void ingresarInputs(){

cout<<"ingresar el valor v: ";
cin>>v;

//for(int i=0; i<v; i++)
//   milista.miPushFront(i);


 for(int i=0; i<v; i++)
   {milista.miPushEnd(i);}

    milista.insertar(-8,0);

    milista.imprimir();

   for(int i=0;i<v+10; i++)
   if(milista.buscar(i)==true)
   cout<<i<<":"<<"se encontro el elemento"<<endl;
   else
    cout<<"no se encontro"<<endl;


  // for(int i=10; i<v+10; i++)
  // milista.miPushEnd(i);

   }



void imprimirVariablesDelProblema(){
cout<<v;
milista.imprimir();

}

};


int main()
{
   ProblemaQueRequiereUNED miproblema;

   miproblema.ingresarInputs();
   //miproblema.imprimirVariablesDelProblema();




   //milista.crearNodosDePrueba();



    return 0;
}

