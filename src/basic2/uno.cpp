#include <iostream>
using namespace std;

int main(){

    int caja = 0, n = 10;

    for (int i = 1; i <= n; i++)
    {
        caja += i;
        cout << caja << endl;
        cout << n << endl;
        cout << i << endl;


    }
    
    cout << caja << endl;

    return 0;
}