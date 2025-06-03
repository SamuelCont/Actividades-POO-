#include <iostream>
using namespace std;

int main() {
    int filasA, columnasA, filasB, columnasB;

  
    cout << "Ingresa el número de filas de la matriz A: ";
    cin >> filasA;
    cout << "Ingresa el número de columnas de la matriz A: ";
    cin >> columnasA;

    cout << "Ingresa el número de filas de la matriz B: ";
    cin >> filasB;
    cout << "Ingresa el número de columnas de la matriz B: ";
    cin >> columnasB;

    
    if (columnasA != filasB) {
        cout << "Las matrices no se pueden multiplicar. El número de columnas de A debe ser igual al número de filas de B." << endl;
        return 1;
    }

    
    int matrizA[filasA][columnasA];
    int matrizB[filasB][columnasB];
    int resultado[filasA][columnasB] = {0}; 

  
    cout << "Ingresa los elementos de la matriz A:" << endl;
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            cin >> matrizA[i][j];
        }
    }

  
    cout << "Ingresa los elementos de la matriz B:" << endl;
    for (int i = 0; i < filasB; i++) {
        for (int j = 0; j < columnasB; j++) {
            cin >> matrizB[i][j];
        }
    }

    
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            for (int k = 0; k < columnasA; k++) { // o filasB, que es igual
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

   
    cout << "El resultado de la multiplicación es:" << endl;
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
