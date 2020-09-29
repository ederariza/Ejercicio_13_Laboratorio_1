/*
Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
Ej: si se ingresa 4 se debe imprimir:
Los divisores de n son:
1
2
4
*/

#include <iostream>
using namespace std;

int main(){

    int numero_N;
    cout << "Ingrese el numero N: ";
    cin >> numero_N;
    cout << "Los divisores de " << numero_N << " son:" << endl;

    for(int i=1; i<=numero_N; i++){

        if (numero_N % i == 0){
            cout << i << endl;
        }
    }

    return 0;
}
