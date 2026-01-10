#include <iostream>

using namespace std;

int main(void){

    int opcion;
    double num1, num2;
     do {

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
    
        
       switch (opcion) {
            case 1:
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Resultado: " << num1 / num2 << endl;
                } else {
                    cout << "Error: No se puede dividir entre cero." << endl;
                }
                break;
            case 5:
                cout << "Saliendo de la calculadora..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }

    } while (opcion != 5);



    return 0;
}

