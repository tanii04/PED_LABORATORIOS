#include <iostream>

using namespace std;

class estudiante{
    private: 
    string nombre;
    float notafin;

    public: 
    estudiante* siguiente;
    estudiante(string nombre, float notafin){
        this->nombre = nombre;
        this->notafin = notafin;
        siguiente = nullptr;
    }

    void imprimir(){
        cout << "El nombre del estudiante es: " << nombre << endl;
        cout << "La nota final del estudiante es: " << notafin << endl;
    }
};

 class ListaEnlazada {
private:
    estudiante* head;
    float sumaNotas;

    
    int contarRecursivo(estudiante* actual) {
        if (actual == nullptr) {
            return 0; 
        }
        return 1 + contarRecursivo(actual->siguiente);
    }

public:
    ListaEnlazada() {
        head = nullptr;
        sumaNotas = 0;
    }

    
    void agregarEstudiante(string nombre, float nota) {
        estudiante* nuevo = new estudiante(nombre, nota);
        sumaNotas += nota;

        if (head == nullptr) {
            head = nuevo;
        } else {
            estudiante* temp = head;
            while (temp->siguiente != nullptr) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevo;
        }
    }

  
    void imprimirLista() {
        estudiante* temp = head;
        while (temp != nullptr) {
            temp->imprimir();
            temp = temp->siguiente;
        }
    }

    
    float calcularPromedioRecursivo() {
        int cantidad = contarRecursivo(head);
        if (cantidad == 0) {
            return 0;
        }
        return sumaNotas / cantidad;
    }
};


int main(void){



    return 0;
}