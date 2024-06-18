#include <iostream>
#include <vector>

using namespace std;
/**
La idea es la siguiente.

Se le pide al desarrollador (ustedes) que cree el siguiente programa:

El docente deberá ingresar la cantidad de alumnos que rindieron el examen.
Luego deberá ingresar el apellido del alumno
Luego las notas de cada uno de los 4 ejercicio.

El programa deberá Sumar las 4 notas de los ejercicios. y validar si el alumno aprobó o no.

El programa deberá mostrar una lista con los alumnos aprobados con su respectiva nota y una lista con todos los alumnos que rindieron con su respectiva nota.
*/
int main (){
///primero iniciamos las variables
int alumnos;
double acumulador;

string Mensaje[]= {"Primer", "Segunda", "Tercera", "Cuarta"};
///pedir al usuario que ingrese la cantidad de alumnos
cout<<"ingrese la cantidad de alumnos que hicieron el examen: ";
cin>>alumnos;
///iteramos para que el usuario pueda ponerle los datos a cada alumno
double notas[alumnos];
string Apellidos[alumnos];
cout<<endl;
for(int i=0; i<alumnos; i++){
        cout<<"ingrese el apellido del alumno "<<i+1<<": ";
        cin>>Apellidos[i];
        acumulador=0;
    for(int j=0; j<4;j++){
        cout<<"ingrese la "<<Mensaje[j]<<" nota del alumno "<<Apellidos[i]<<": ";
        cin>>notas[i];
        acumulador=acumulador+notas[i];
    }
    notas[i]=acumulador;
    cout<<endl;}
///volvemos a iterar para comprobar que los alumnos esten aprobados y mostrarlos en pantalla
cout<<"Alumnos aprobados"<<endl;
for(int i=0; i<alumnos; i++){

    if(notas[i]>=4){
            cout<<Apellidos[i]<<": "<<notas[i]<<endl;
    }
}
///mostramos a todos los alumnos con sus respectivas notas en pantalla
cout<<"Notas de Todos los alumnos"<<endl;
for(int i=0; i<alumnos; i++){
        cout<<Apellidos[i]<<": "<<notas[i]<<endl;
}
return 0;
}
