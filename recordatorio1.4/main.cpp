#include <iostream>

using namespace std;
class cNodo{
public:
int num;

cNodo* sig;

cNodo(int n){
num=n;
}

void imprimir()
{
cout<<endl;
cout<<"numero: "<<num<<endl;
cout<<endl;
}

};

int main()
{

    cNodo* aux=NULL;
    //cNodo primero("Fisica","ABCDfisica");
    //aux=&primero;

    cNodo* inicio=new cNodo(0);
    aux=inicio;
    aux->imprimir();


    for(int i=1;i<10000;i++)
    {
    aux->sig=new cNodo(i);
    aux=aux->sig;
    aux->imprimir();
    }


    return 0;
}
