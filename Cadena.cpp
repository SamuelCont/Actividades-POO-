#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    string estado_actual = "s1"; // Variable para el estado actual de la máquina

    printf("Ingresa una cadena de caracteres: ");
    cin >> cadena;

    int tamano = cadena.length(); // Variable para almacenar la longitud de la cadena
    printf("Longitud de la cadena ingresada: %d\n", tamano);

    for (int i = 0; i < tamano; i++) {
        char simbolo = cadena[i]; 

        if (simbolo == 'a' && estado_actual != "s3" && estado_actual != "s4") {
            estado_actual = "s2";
            printf("Estado actual: %s\n", estado_actual.c_str());
        } else if (simbolo == 'b' && estado_actual == "s2") {
            estado_actual = "s1";
            printf("Estado actual: %s\n", estado_actual.c_str());
        } else if (simbolo == 'c' && estado_actual == "s2") {
            estado_actual = "s4";
            printf("Estado actual: %s\n", estado_actual.c_str());
        } else if (simbolo == 'd' && estado_actual == "s4") {
            estado_actual = "s3";
            printf("Estado actual: %s\n", estado_actual.c_str());
        } else if (simbolo == 'b' && estado_actual == "s3") {
            estado_actual = "s4";
            printf("Estado actual: %s\n", estado_actual.c_str());
        } else if (simbolo == 'a' && estado_actual == "s3") {
            estado_actual = "s1";
            printf("Estado actual: %s\n", estado_actual.c_str());
        } else {
            printf("Estado actual sin cambios: %s\n", estado_actual.c_str());
        }
    }

    return 0;
}
