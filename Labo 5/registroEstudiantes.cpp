#include <iostream>

using namespace std;

struct Estudiante {
 int carnet;
 char nombre[50];
 float nota;
 Estudiante* izquierdo;
 Estudiante* derecho;
};

// Función para crear un nuevo estudiante
Estudiante* crearEstudiante(int carnet, char nom[], float nota) {
 Estudiante* nuevo = new Estudiante();
 nuevo->carnet = carnet;
 nuevo->nota = nota;
 nuevo->izquierdo = NULL;
 nuevo->derecho = NULL;

 // Copiar el nombre
 int i = 0;
 while(nom[i] != '\0' && i < 49) {
nuevo->nombre[i] = nom[i];
 i++;
 }
 nuevo->nombre[i] = '\0';

 return nuevo;
}

// TODO: Implementar estas funciones
// 1. Insertar un estudiante en el árbol (ordenado por carnet)
Estudiante* insertar(Estudiante* raiz, int carnet, char nombre[], float nota) {
 if (raiz == NULL) {
        return crearEstudiante(carnet, nombre, nota);
    }

    if (carnet < raiz->carnet) {
        raiz->izquierdo = insertar(raiz->izquierdo, carnet, nombre, nota);
    } 
    else if (carnet > raiz->carnet) {
        raiz->derecho = insertar(raiz->derecho, carnet, nombre, nota);
    }

    return raiz;
}

// 2. Mostrar todos los estudiantes en orden de carnet
void mostrarEstudiantes(Estudiante* raiz) {
if (raiz != NULL) {
        mostrarEstudiantes(raiz->izquierdo);
        cout << "Carnet: " << raiz->carnet
             << "Nombre: " << raiz->nombre
             << "Nota: " << raiz->nota << endl;
        mostrarEstudiantes(raiz->derecho);
    }
}

// 3. Buscar un estudiante por carnet y mostrar sus datos
void buscarEstudiante(Estudiante* raiz, int carnet) {
if (raiz == NULL) {
        cout << "Estudiante no encontrado.\n";
        return;
    }

    if (carnet == raiz->carnet) {
        cout << "Carnet: " << raiz->carnet
             << "Nombre: " << raiz->nombre
             << "Nota: " << raiz->nota << endl;
    }
    else if (carnet < raiz->carnet) {
        buscarEstudiante(raiz->izquierdo, carnet);
    }
    else {
        buscarEstudiante(raiz->derecho, carnet);
    }
}

// 4. Mostrar estudiantes aprobados (nota >= 6.0)
void mostrarAprobados(Estudiante* raiz) {
if (raiz != NULL) {
        mostrarAprobados(raiz->izquierdo);

        if (raiz->nota >= 6.0) {
            cout << raiz->nombre << " - " << raiz->nota << endl;
        }

        mostrarAprobados(raiz->derecho);
    }
}

// 5. Mostrar estudiantes reprobados (nota < 6.0)
void mostrarReprobados(Estudiante* raiz) 
{
    if (raiz != NULL) {
        mostrarReprobados(raiz->izquierdo);

        if (raiz->nota < 6.0) {
            cout << raiz->nombre << " - " << raiz->nota << endl;
        }

        mostrarReprobados(raiz->derecho);
    }
}

// 6. Calcular el promedio de todas las notas
float calcularPromedio(Estudiante* raiz, int* contador) {
    if (raiz == NULL) {
        return 0;
    }

    float sumaIzq = calcularPromedio(raiz->izquierdo, contador);
    float sumaDer = calcularPromedio(raiz->derecho, contador);

    (*contador)++;

    return sumaIzq + sumaDer + raiz->nota;
} 