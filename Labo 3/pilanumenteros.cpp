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

void mostrarPila(nodo* tope) {
    if (tope == NULL) {
        cout << "No hay elementos en la pila" << endl;
        return;
    }
    cout << "Los elementos de la pila son: " << endl;
    while (tope != NULL) {
        cout << tope->dato << endl;
        tope = tope->siguiente;
    }
}

int main(void){

    return 0;
}