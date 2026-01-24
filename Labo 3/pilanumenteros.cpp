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

int sumarPila(nodo* tope){
    int suma = 0;
    while(tope != NULL){
        suma += tope->dato;
        tope = tope->siguiente;
    }
    return suma;
}

int main(void){

    nodo* pila = NULL;
    int opcion, valor;

    do {
        cout << endl << " MENU " << endl;
        cout << "1. Insertar un numero (push)" << endl;
        cout << "2. Eliminar el tope (pop)" <<endl;
        cout << "3. Mostrar el tope (top)" <<endl;
        cout << "4. Mostrar todos los elementos" << endl;
        cout << "5. Sumar los elementos"<< endl;
        cout << "6. Salir"<< endl;
        cout << "Seleccione una opcion:";
        cin >> opcion;

switch (opcion) {
            case 1:
                cout << "Ingrese un numero: ";
                cin >> valor;
                push(pila, valor);
                break;

            case 2:
                pop(pila);
                break;

            case 3:
                top(pila);
                break;

            case 4:
                mostrarPila(pila);
                break;

            case 5:
                cout << "Suma total: " << sumarPila(pila) << endl;
                break;

            case 6:
                cout << "Saliendo del programa..."<< endl;
                break;

            default:
                cout << "Opción invalida."<< endl;
        }
    } while (opcion != 6);


    return 0;
}