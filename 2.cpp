//ESCARZA PACORI ALEXANDER RAUL

#include <iostream>
#include <string.h>


using namespace std;

int main(){
    string nombre,apeM,apeP;
    string n,am;
    cout<<"Nombre: ";cin>>nombre;
    cout<<"Apellido Paterno: ";cin>>apeP;
    cout<<"Apellido Materno: ";cin>>apeM;

    n=nombre[0];am=apeM[0];
    cout<<"Correo  institucional: "<<n<<apeP<<am<<"@unsa.edu.pe";




    return 0;
}