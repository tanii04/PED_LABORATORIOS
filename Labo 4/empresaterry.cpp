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

void insertarInicio(int id, string nombre, float peso) {
    if (buscarPorId(id) != nullptr) {
        cout << "El id ya existe."<< endl;
        return;
    }

    Nodo* nuevo = new Nodo{id, nombre, peso, head, nullptr};

    if (head == nullptr) { 
        head = tail = nuevo;
    } else {
        head->ant = nuevo;
        head = nuevo;
    }

    cout << "Paquete insertado al inicio."<< endl;
}

void insertarFinal(int id, string nombre, float peso) {
    if (buscarPorId(id) != nullptr) {
        cout << "El id ya existe."<< endl;
        return;
    }

    Nodo* nuevo = new Nodo{id, nombre, peso, nullptr, tail};

    if (tail == nullptr) { 
        head = tail = nuevo;
    } else {
        tail->sig = nuevo;
        tail = nuevo;
    }

    cout << "Paquete insertado al final." << endl;
}

void mostrarAdelante() {
    if (head == nullptr) {
        cout << "La lista está vacía."<<endl;
        return;
    }

    Nodo* aux = head;
    while (aux != nullptr) {
        cout << "ID: " << aux->id
             << " Nombre: " << aux->nombre
             << " Peso: " << aux->peso << endl;
        aux = aux->sig;
    }
}

void mostrarAtras() {
    if (tail == nullptr) {
        cout << "La lista está vacía."<< endl;
        return;
    }

    Nodo* aux = tail;
    while (aux != nullptr) {
        cout << "ID: " << aux->id
             << "Nombre: " << aux->nombre
             << "Peso: " << aux->peso << endl;
        aux = aux->ant;
    }
}