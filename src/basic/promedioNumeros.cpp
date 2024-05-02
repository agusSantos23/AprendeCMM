#include <iostream>
using namespace std;

int main(){

    int cantidad, valor, caja = 0;

    cout << "Cuantos valores vas a introducir: ";
    cin >> cantidad;

    for(int i = 0; i < cantidad; i++){

        cout << "Introduce el valor: ";
        cin >> valor;

        caja += valor;
        
    }

    cout << "El promedio es de " << caja / cantidad << endl;

    return 0;
}
