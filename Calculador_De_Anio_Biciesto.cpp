#include <iostream>

using namespace std;

/*Consigna
Crear un programa que permita al usuario ingresar un año y determine si es bisiesto o
no. Un año es bisiesto si es divisible por 4, pero no por 100, a menos que también sea
divisible por 400.*/

int main (){

int Anio;
cout<<"Ingrese un anio ";
cin>>Anio;

if(Anio%4==0 && Anio%100!=0 || Anio%400==0)
    {
        cout<<"el Anio es biciesto";
    }
else{
        cout<<"el anio no es biciesto";
}






}
