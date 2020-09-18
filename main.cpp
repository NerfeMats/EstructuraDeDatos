#include <iostream>

using namespace std;

class cNodo{
private:     // especificador acceso
int data;                   //atributos
cNodo* sig;

public:    // especificador de acceso , tambien existen protected (herencia) private
cNodo(int d, cNodo* s = NULL){   //constructor
    data=d;
    sig=s;
    cout<<"Estado inicial: "<<endl;
    imprimiNodo();  // imprimir el Estado inicial de mi objeto;

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

public:
//void crearNodosDePrueba(){


//inicio = new cNodo(1);
//cNodo *ptrPrimerNodo = new cNodo(13);
//inicio->sig = ptrPrimerNodo;
//inicio->sig->sig = new cNodo(-14);
//inicio->sig->sig->sig = new cNodo(-17);

//}

void agregarValor(int value)
{

if(inicio==NULL)
    inicio=new cNodo(value);
else
{
cNodo* ultimo;
ultimo->sig = new cNodo(value);
ultimo= ultimo->sig;
}


}





void imprimir(){
cNodo * aux = inicio;


while(aux!=NULL)
{
aux->imprimiNodo();
aux=aux->sig;
}


}

};




int main()
{
   cListaLigada milista;
   //milista.crearNodosDePrueba();
   milista.imprimir();


    return 0;
}

