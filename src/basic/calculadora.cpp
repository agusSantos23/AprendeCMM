#include <iostream>
using namespace std;

int main(){

    int a, b;
    string op;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Que operacion desea realizar: ";
    cin >> op;

    if (op == "sumar") {

        cout << "Suma: " << a + b << endl;

    } else if (op == "resta") {

        cout << "Resta: " << a - b << endl;

    } else if (op == "multiplicar") {

        cout << "Multiplicación: " << a * b << endl;

    } else if (op == "dividir") {

        
        if (b != 0) {

            cout << "División: " << a / b << endl;

        } else {

            cout << "No se puede dividir por cero." << endl;
            
        }

    } else {

        cout << "La operacion que quiere realizar no existe." << endl;

    }
}
