
#include <iostream>

using namespace std;
class cNodo{
public:
string materia;
string clave;
cNodo* sig;

cNodo(string m1, string c1){
materia=m1;
clave=c1;

}

};

int main()
{
    cNodo primero("Fisica","ABCDfisica");
    /**<

    cNodo segundo;
    cNodo tercero;
    cNodo cuarto;

     */

    cout<<primero.materia<<endl;
    cout<<primero.clave<<endl;

    primero.sig=new cNodo("Calculo","ABCDCalculo");
    cout<<primero.sig->materia<<endl;
    cout<<primero.sig->clave<<endl;


    primero.sig->sig=new cNodo("Qumica","ABCDQumica");
    cout<<primero.sig->sig->materia<<endl;
    cout<<primero.sig->sig->clave<<endl;




    primero.sig->sig->sig=new cNodo("Electronica", "ABCDElectronica");


    cout<<primero.sig->sig->sig->materia<<endl;
    cout<<primero.sig->sig->sig->clave<<endl;


    primero.sig->sig->sig->sig=&primero;
    cout<<primero.sig->sig->sig->sig->materia<<endl;
    cout<<primero.sig->sig->sig->sig->clave;
    cout << "Hello world!" << endl;
    return 0;
}
