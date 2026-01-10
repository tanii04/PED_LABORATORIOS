#include <iostream>

using namespace std;

int main(void){

    int opcion;
    double num1, num2;

        cout << endl << "CALCULADORA" << endl << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        
        if(opcion >= 1 && opcion <= 4){
            cout << endl << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
        }
    

    return 0;
}
