#include <iostream>

using namespace std;
class cNodo{
public:

string producto;
int precio;
int cantidad;

cNodo(string prod, int prec, int can )
{
producto=prod;
precio = prec;
cantidad = can;
}

cNodo* sig;

void imprimir()
{
cout<<"producto: "<<producto<<endl;
cout<<"precio: "<<precio<<endl;
cout<<"cantidad: "<<cantidad<<endl;

}
//la cantidad del producto en unidades por ejemplo
//5 unidades de este producto. El minimo valor es 1
//el maximo es 20

};


string regresaNombre(int i){
return "Producto"+to_string(i);
}

int numeroAleatorio(){
return rand() % 1000 +1;
}

int precioAleatorio(){
return rand() % 20 +1;
}

class cListaLigada{
    public:
cNodo* inicio;
int n;
void crearListaLigada()
{

}

void imprimir(){

cNodo* aux=inicio;
for(int i=0; i<n;i++){
aux->imprimir();
aux=aux->sig;
}


}

} ;



int main()
{
    cListaLigada listaparaCarShop1;
    listaparaCarShop1.imprimir();

    cListaLigada listaparaCarShop2;
    listaparaCarShop2.imprimir();

    cListaLigada listaparaCarShop3;
    listaparaCarShop3.imprimir();

    cout << "Hello world!" << endl;
    return 0;
}
