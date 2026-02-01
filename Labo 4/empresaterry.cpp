#include <iostream>

using namespace std;

struct Nodo {
    int id;
    string nombre;
    float peso;
    Nodo* sig;
    Nodo* ant;
};


Nodo* head = nullptr;
Nodo* tail = nullptr;

Nodo* buscarPorId(int id) {
    Nodo* aux = head;
    while (aux != nullptr) {
        if (aux->id == id)
            return aux;
        aux = aux->sig;
    }
    return nullptr;
}