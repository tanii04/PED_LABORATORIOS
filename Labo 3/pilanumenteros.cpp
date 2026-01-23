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

void pop(nodo*& tope){
    if(tope == NULL){
        cout << "No hay elementos que eliminar" << endl;
        return;
   }

   nodo* aux = tope;
   tope = tope->siguiente;
   delete aux;
   cout << "Su elemento se ha eliminado de la pila" << endl;
}

void top(nodo*tope){
    if(tope == NULL){
        cout << "No hay ningun elemento en el tope" << endl;
        return;
    }
    cout << "El elemento del tope es: " << tope->dato << endl;
}

int main(void){

    return 0;
}