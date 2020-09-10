#include <iostream>

using namespace std;

class cNodo{
private:
int data;
cNodo* sig;

public:
cNodo(int d, cNodo* s){
    data=d;
    sig=s;
}

int getData(){
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

cNodo(){

}
//friend int main();
};


int main()
{
cNodo primerNodo(1000,NULL);
//primerNodo.data=1;
//primerNodo.sig=NULL;
//cout<<"primerNodo: "<<primerNodo.getData()<<endl;
//cout<<"direccion de  ptr sig: "<<primerNodo.getSig()<<endl;
primerNodo.imprimiNodo();

cNodo *ptrPrimerNodo = new cNodo(13,0);
//cout<<"data en ptr: "<<ptrPrimerNodo->getData()<<endl;
//cout<<"direccion de  ptr sig: "<<ptrPrimerNodo->getSig()<<endl;
ptrPrimerNodo->imprimiNodo();
    cout << "Hello world! uam azc" << endl;
    return 0;
}

