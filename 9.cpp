//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;
int main(){

    int lista[10],sumNegativos=0;
    cout<<"Introduzca numeros aleatorios"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Numero "<<i+1<<" : ";cin>>lista[i];
    }

    for (int i=0;i<10;i++){
        if(lista[i]<0){
            sumNegativos+=lista[i];
        }
    }
    cout<<"Suma de negativos: "<<sumNegativos;

    return 0;
}