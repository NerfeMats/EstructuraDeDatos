#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
class ProductoEnCarritoDeVentas{
public:

string producto;
int precio;
int cantidad;

ProductoEnCarritoDeVentas(string prod, int prec, int can )
{
producto=prod;
precio = prec;
cantidad = can;
}

ProductoEnCarritoDeVentas * sig;

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


void imprimir(nodo* inicio)
{
//imprimir los nodos
}



string regresaNombre(int i){
return "Producto"+to_string(i);
}

int numeroAleatorio(){
return rand() % 1000 +1;
}

int precioAleatorio(){
return rand() % 20 +1;
}

int main()
{
srand(time(NULL));

int n;
ProductoEnCarritoDeVentas* aux = NULL;
cout<<"cuantos productos aleatorios en el carrito de ventas";
cin>>n;
// Haga que el programa compile y se ejecute sin errores
ProductoEnCarritoDeVentas* inicio = new ProductoEnCarritoDeVentas(regresaNombre(rand()%n),numeroAleatorio(), precioAleatorio());


aux = inicio;
//aux->imprimir();

for(int i=0; i<n;i++){
aux->sig= new ProductoEnCarritoDeVentas(regresaNombre(rand()%n),numeroAleatorio(),precioAleatorio());
//aux->imprimir();
aux=aux->sig;
}

aux=inicio;
for(int i=0; i<n;i++){
aux->imprimir();
aux=aux->sig;
}

inicio->imprimir();
/*segundo*/

aux = NULL;
cout<<"cuantos productos aleatorios en el carrito de ventas dos";
cin>>n;
// Haga que el programa compile y se ejecute sin errores

ProductoEnCarritoDeVentas* inicio1 = new ProductoEnCarritoDeVentas(regresaNombre(rand()%n),numeroAleatorio(), precioAleatorio());

aux = inicio1;
//aux->imprimir();

for(int i=0; i<n;i++){
aux->sig= new ProductoEnCarritoDeVentas(regresaNombre(rand()%n),numeroAleatorio(),precioAleatorio());
//aux->imprimir();
aux=aux->sig;
}

aux=inicio1;
for(int i=0; i<n;i++){
aux->imprimir();
aux=aux->sig;
}

inicio1->imprimir();


aux=inicio1;
for(int i=0; i<n;i++){
aux->imprimir();
aux=aux->sig;
}



    return 0;
}
