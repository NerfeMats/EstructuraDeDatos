#include <iostream>

using namespace std;
string regresaNombre(int i){
return "Producto"+to_string(i);
}

int numeroAleatorio(){
return rand() % 1000 +1;
}

int precioAleatorio(){
return rand() % 20 +1;
}



class cNodo{
public:

string producto;
int precio;
int cantidad;
cNodo* sig;

cNodo(string prod, int prec, int can )
{
producto=prod;
precio = prec;
cantidad = can;
sig=NULL;
}



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

class cListaLigada{
    public:

cNodo* inicio;
cNodo* aux;
int n;

 cListaLigada()
 {
   inicio=NULL;
 }

    void insertarProducto(string prod, int pre, int can)
    {
        if (inicio==NULL) // no hay productos
            {inicio = new cNodo(prod,pre,can);
            aux=inicio;}
        else
        {

            aux->sig = new cNodo(prod,pre,can);
            aux=aux->sig;

        }
    }


    void imprimir(){

    if(inicio!=NULL)
    {
        cNodo* aux=inicio;
        while(aux!=NULL){
        aux->imprimir();
        aux=aux->sig;
        }
    } else
      cout<<"La lista esta vacia"<<endl;

}

} ;




int main()
{
    cListaLigada listaparaCarShop1;
    listaparaCarShop1.insertarProducto("prodA", 34, 2);
    listaparaCarShop1.insertarProducto("prodB", 4, 5);
    listaparaCarShop1.insertarProducto("prodC", 40, 2);
    listaparaCarShop1.imprimir();

    cListaLigada listaparaCarShop2;
    listaparaCarShop2.imprimir();

    cListaLigada listaparaCarShop3;
    listaparaCarShop3.imprimir();

    cout << "Hello world!" << endl;
    return 0;
}
