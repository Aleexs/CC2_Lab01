//ESCARZA PACORI ALEXANDER RAUL

#include <iostream>

using namespace std;

int main(){
    string password,solicitud;
    password="perrito";
    cout<<"Ingrese contrasenia: ";cin>>solicitud;
    while(password!=solicitud){
        cout<<"Ingrese contrasenia: ";cin>>solicitud;
    }
    cout<<"Contrasenia correcta";



    return 0;
}