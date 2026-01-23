#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo* siguiente;

};

void push(nodo*& tope, int num){
    nodo* nuevo = new nodo;
    nuevo->dato = num;
    nuevo->siguiente = tope;
    tope = nuevo;
    cout << "Su numero se ha agregado a la pila" << endl;
}


int main(void){

    return 0;
}