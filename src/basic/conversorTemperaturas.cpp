#include <iostream>
using namespace std;

int main(){

    double n;
    string cambio;

    cout << "Introduce un numero: ";
    cin >> n;

    cout << "Introduce a que medida lo quieres pasar, ej 'c' o 'f': ";
    cin >> cambio;


    if (cambio == "c") {

        cout << "De Fahrenheit a Celsius: " << (n - 32) * 5.0 / 9.0 << endl;

    } else if (cambio == "f"){

        cout << "De Fahrenheit a Celsius: " << (n * 9.0 / 5.0) + 32 << endl;
        
    }else{

        cout << "No se encontro temperatura deseada";

    }
    





    return 0;
}



