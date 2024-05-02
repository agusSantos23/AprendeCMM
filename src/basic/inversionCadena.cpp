#include <iostream>
using namespace std;

int main(){

    string p;

    cout << "Ingrese un texto: ";
    getline(cin, p);

    cout << "El texto en orden inverso es: ";
    for (int i = p.length() - 1; i >= 0; --i) {

        cout << p[i];
        
    }
    cout << endl;

    return 0;
}