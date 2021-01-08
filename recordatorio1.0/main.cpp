#include <iostream>

using namespace std;
class cNodo{
public:
string materia;
string clave;

cNodo* sig;
};

int main()
{
    cNodo primero;
    cNodo segundo;
    cNodo tercero;
    cNodo cuarto;

    primero.materia="Fisica";
    cout<<primero.materia<<endl;

    primero.clave="ABCDfisica";
    cout<<primero.clave<<endl;
    primero.sig=&segundo;

    segundo.materia="Calculo";
    cout<<primero.sig->materia<<endl;

    segundo.clave="ABCCalculo";
    cout<<primero.sig->clave<<endl;
    primero.sig->sig=&tercero;

    tercero.materia="Quimica";
    cout<<primero.sig->sig->materia<<endl;

    tercero.clave="ABCDQuimica";
    primero.sig->sig->sig=&cuarto;

    cuarto.materia="Electronica";
    cout<<primero.sig->sig->sig->materia<<endl;

    cuarto.clave="ABCDElectronica";

    primero.sig->sig->sig->sig=&primero;
    cout<<primero.sig->sig->sig->sig->materia;
    cout << "Hello world!" << endl;
    return 0;
}
