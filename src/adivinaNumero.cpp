#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    
    int intento, nSecreto = rand() % 100 + 1;


    while (true) {
        cout << "Ingresa un numero: ";
        cin >> intento;

        if (intento == nSecreto) {
            cout << "Has ganado" << endl;
            break;
        } else {

            if (intento < nSecreto) {
                cout << "es mayor." << endl;
            } else {
                cout << "es menor." << endl;
            }
        }
    }

    return 0;
}
