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
    imprimiNodo();

}

int getData(){          // interfaz de clase
return data;
}

cNodo* getSig(){
return sig;
}

void imprimiNodo()
{
cout<<"Primer Nodo: "<<data<<endl;
cout<<"direccion de ptr"<<sig<<endl;

}

cNodo(){       // contructor

}


friend int main();
};


int main()
{

cNodo primerNodo(1);
//primerNodo.data=1;
//primerNodo.sig=NULL;
//cout<<"primerNodo: "<<primerNodo.getData()<<endl;
//cout<<"direccion de  ptr sig: "<<primerNodo.getSig()<<endl;
//primerNodo.imprimiNodo();



cNodo *ptrPrimerNodo = new cNodo(13);


primerNodo.sig = ptrPrimerNodo;
cout<<"data: "<<primerNodo.getData()<<endl;
cout<<"data: "<<primerNodo.sig->getData();
cout<<endl;


primerNodo.sig->sig = new cNodo(-14);
cout<<primerNodo.sig->sig->getData();
cout<<endl;

//cout<<"data en ptr: "<<ptrPrimerNodo->getData()<<endl;
//cout<<"direccion de  ptr sig: "<<ptrPrimerNodo->getSig()<<endl;
//ptrPrimerNodo->imprimiNodo();

    cout << "Hello world! uam azc" << endl;
    return 0;
}

