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

void imprimiNodo()
{
cout<<"Nodo: "<<data<<endl;
cout<<"sig: "<<sig<<endl;

}

cNodo(){       // contructor

}

friend class cListaLigada;
friend int main();
};


class cListaLigada{

cNodo * inicio;
cNodo* ultimo;
public:


cListaLigada(){
inicio=NULL;
ultimo=NULL;
}

void agregarValor(int value)
{

if(inicio==NULL){

    inicio=new cNodo(value);
     ultimo=inicio;
}
else
{

ultimo->sig = new cNodo(value);
ultimo= ultimo->sig;
}


}


void imprimir(){
cNodo * aux = inicio;


while(aux!=NULL)
{
cout<<"***"<<endl;
aux->imprimiNodo();
aux=aux->sig;
}


}

};

class ProblemaQueRequiereUNED{
int v;
cListaLigada milista;
public:
void ingresarValorALista(){

 for(int i=0; i<10000; i++)
   milista.agregarValor(i);
   }


void imprimirVariablesDelProblema(){
cout<<v;
milista.imprimir();

}

};


int main()
{
   ProblemaQueRequiereUNED miproblema;

   miproblema.ingresarValorALista();
   miproblema.imprimirVariablesDelProblema();




   //milista.crearNodosDePrueba();



    return 0;
}

