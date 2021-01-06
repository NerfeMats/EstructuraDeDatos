#include <iostream>

using namespace std;

class cNodo{

public:
int i;

cNodo* sig;
};

int main()
{
    // ejemplos de acceder a la variable

    cNodo obj1;
    obj1.i=0;

    cNodo obj2;
    obj2.i = obj1.i;

    obj1.i=-1;
    //---------------------------
    obj1.sig = &obj2;
    obj2.sig = &obj1;
    // hasta aqui hay un lista circular de dos elementos
    cNodo obj3;
    obj3.i=5;
    obj2.sig = &obj3;
    // hasta aqui, tres elementos en la lista ligada
    cNodo obj4;
    obj3.sig = &obj4;
    // hasta aqui, 4 elementos de en ll

    // jugar con el acceso a la informacion guardada en la lista

    cout<<"obj1.i: "<<obj1.i<<endl;
    cout<<"desde el objeto 1 llegar obj2.i: "<<obj1.sig->i<<endl;
    cout<<"desde el objeto 2 llegar obj3.i: "<<obj2.sig->i<<endl;
    cout<<"desde el objeto 1 llegar obj3.i: "<<obj1.sig->sig->i<<endl;
    // ejercicio mas cmpleto

    cout<<"obj4.i: "<<obj4.i<<endl;
    cout<<"desde el 3 ::obj4.i: "<<obj3.sig->i<<endl;
    cout<<"desde el 2 ::obj4.i: "<<obj2.sig->sig->i<<endl;
    cout<<"desde el 1 ::obj4.i: "<<obj1.sig->sig->sig->i<<endl;
    cout << "Hello world!q" << endl;
    return 0;
}
