// ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;
int main(){
    int hora,minuto,meridiano,agregar;
    int restante=0,suma=0,nuevaHora,nuevoMinuto;
    cout<<"Hora (formato 12 horas) : ";cin>>hora;
    while(hora<=0 && hora>=12){
        cout<<"Hora (formato 12 horas) : ";cin>>hora;
    }
    cout<<"Minuto : ";cin>>minuto;
    while(minuto<=0 && minuto>=60){
      cout<<"Minuto : ";cin>>minuto;  
    }
    cout<<"AM (1) || PM (2) : ";cin>>meridiano;
    cout<<"Minutos a agregar: ";cin>>agregar;
    suma=minuto+agregar;
    if(suma>=60){
        nuevaHora=suma/60;
        nuevoMinuto=suma%60;
    }
    else{
        nuevaHora=0;
        nuevoMinuto=suma;
    }

    if(hora+nuevaHora>12){
        hora= (hora+nuevaHora)%12;
        if(meridiano==1){
            cout<<"La hora es: "<<hora<<":"<<nuevoMinuto<<" PM";
        }
        else if(meridiano==2){
           cout<<"La hora es: "<<hora<<":"<<nuevoMinuto<<" AM"; 
        }
    }
    else{
        hora= hora+nuevaHora;
        if(meridiano==1){
            cout<<"La hora es: "<<hora<<":"<<nuevoMinuto<<" AM";
        }
        else if(meridiano==2){
           cout<<"La hora es: "<<hora<<":"<<nuevoMinuto<<" PM"; 
        }
    }







    return 0;
}