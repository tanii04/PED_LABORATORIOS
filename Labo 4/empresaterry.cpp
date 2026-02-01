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