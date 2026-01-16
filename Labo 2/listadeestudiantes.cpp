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


int main(void){




    return 0;
}