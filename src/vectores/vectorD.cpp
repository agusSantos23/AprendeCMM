#include <iostream>
using namespace std;

int main(){

    int numero[2][2] = {{1,2},{3,4}};
    int nueva[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            nueva[i][k] = numero[i][k];
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            cout << nueva[i][k];
    
        }
        cout<<endl;
        
    }
    
    
}