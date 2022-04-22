//ESCARZA PACORI ALEXANDER RAUL

#include <iostream>

using namespace std;

int main(){
    int x;
    cout<<"Cantidad de numeros: ";cin>>x;
    int lista[x];
    float suma=0;
    for (int i=0;i<x;i++){
        cout<<"Numero "<<i+1<<" : ";cin>>lista[i];
        suma+=lista[i];
    }

    cout<<"MA de los numeros introducidos: "<<suma/2;




    return 0;
}