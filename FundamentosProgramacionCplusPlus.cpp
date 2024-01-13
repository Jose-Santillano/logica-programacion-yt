#include <iostream>
#include <string.h>
using namespace std;

int sumar(int a, int b);

int main(){
	
	// Variables y tipos de datos
	cout<<"VARIABLES Y TIPOS DE DATOS"<<endl;
    int entero = 300;
    string cadenaCaracteres = "Harvey";
    float flotante = 30.50f;
    bool boleano = true;

    cout<<"int: "<<entero<<endl;
    cout<<"String: "<<cadenaCaracteres<<endl;
    cout<<"float: "<<flotante<<endl;
    cout<<"boolean: "<<boleano<<endl;

	// Estructuras de control

    cout<<"ESTRUCTURAS CONTROL"<<endl;
    // Costo de Vehiculo = 100
    int dinero = 100;
    if(dinero>=100){
        cout<<"Puedes comprar el auto."<<endl;
    }else{
        cout<<"No completas el auto."<<endl;
    }

    int dia = 1;

    switch (dia){
        case 1: {
            cout<<"Lunes"<<endl;
            break;
        }
        case 2: {
            cout<<"Martes"<<endl;
            break;
        }
        default: {
            cout<<"No existe el dia"<<endl;
        }
    }
    
    // Estructuras repetitivas

    cout<<"ESTRUCTURAS REPETITIVAS"<<endl;
    for(int i=0; i<=10; i++){
        cout<<i<<endl;
    }

    int i=0;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    //Funciones

    cout<<"FUNCIONES"<<endl;
    cout<<"SUMA: "<<sumar(3, 4);
    
}

int sumar(int a, int b){
	return a + b;
}
