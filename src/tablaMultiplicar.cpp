#include <iostream>
using namespace std;

int main(){

    int a;

    cout << "Introduce un numero: ";
    cin >> a;
    cout << "Tabla del " << a << ":" << endl;

    for(int i = 1; i <= 10; ++i){

        cout << a * i << endl;
    }


    return 0;
}