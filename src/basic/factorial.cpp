#include <iostream>
using namespace std;

int main(){

    int n, caja = 0;

    cout << "Dime un numero: ";
    cin >> n;
    if (n == 0){

        cout << "El factorial es: " << 1;
    }else{

        for (int i = 1; i <= n; i++){
            caja *= i;
        }

        cout << "El factorial es:" << caja;

    }
    
    

    return 0;
}
