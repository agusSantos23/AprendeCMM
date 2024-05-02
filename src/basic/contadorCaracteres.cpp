#include <iostream>
using namespace std;

int main(){

    string p;
    int contador = 0;

    cout << "Ingrese un texto: ";
    getline(cin, p);

    for (char caracter : p) {

        if (caracter != ' ') {

            contador++;

        }

    }

    cout << "La cadena tiene " << contador << endl;




    return 0;
}