#include <iostream>
using namespace std;

int main(){

    int n;
    bool primo = true;

    cout << "Ingrese un número: ";
    cin >> n;

    if (n <= 1) {

        cout << "El número no es primo." << endl;

    } else {

        for (int i = 2; i <= n / 2; ++i) {

            if (n % i == 0) {
                primo = false;
                break;
            }
        }
        
        if (primo) {

            cout << "El número es primo." << endl;

        } else {

            cout << "El número no es primo." << endl;
            
        }
    }
    
    return 0;
}