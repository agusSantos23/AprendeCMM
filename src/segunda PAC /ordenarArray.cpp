#include <iostream>
using namespace std;

int main(){

    int cantidad = 0;

    cout << "Cuantos valores vas a introducir";
    cin >> cantidad;

    int lista[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Dame un valor";
        cin >> lista[i];
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout << lista[i];
    }
    



    return 0;
}