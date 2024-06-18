#include <iostream>
#include <vector>
using namespace std;
///->Suma de vectores
/**Para sumar 2 vectores
[]Deben tener el mismo tamaño o sea que tenemos que comprobar que tengan el mismo tamaño
[]Deben sumarse con su fila y columna correspondientes (Vector [1] [1] + Vector2 [1] [1])
[]El Resultado lo mostramos con un tercer vector
*/
int main () {
///Iniciamos las variables
int fila1;
int fila2;
int columna1;
int columna2;
///Pedimos a el usuario los datos
cout<<"ingrese la cantidad de filas del primer vector ";
cin>>fila1;
cout<<"ingrese cantidad de columnas del primer vector ";
cin>>columna1;

int Vector1[fila1][columna1];

cout<<"ingrese la cantidad de filas del segundo vector ";
cin>>fila2;
cout<<"ingrese cantidad de columnas del segundo vector ";
cin>>columna2;

int Vector2 [fila2][columna2];
///comprobamos que el primer vector mida lo mismo que el segundo
if(fila1==fila2 && columna1 == columna2 && fila1!=0 && fila2!=0 && columna1!=0 && columna2!=0 ){
        cout<<"Es posible sumar"<<endl;
}else{
    cout<<"No se pueden sumar estos vectores";
    return 0;
    }
int vector3[fila2][columna2];

///Iteramos para asignarle el valor al vector y sumamos en el mismo
for(int i=0; i<fila1; i++){
    for(int j=0; j<columna2;j++){
       cout<<"ingrese el numero de la fila "<<i+1<<" columna "<<j+1<<" del primer vector: "<<endl;
       cin>>Vector1[i][j];
       cout<<"ingrese el numero de la fila "<<i+1<<" columna "<<j+1<<" del segundo vector: "<<endl;
       cin>>Vector2[i][j];

       vector3[i][j] = Vector1[i][j] + Vector2 [i][j];

       }
       }
///hacemos otra iteracion para mostrar el resultado
for(int i=0; i<fila1; i++){
        cout<<endl;
    for(int j=0; j<columna2;j++){
    cout<<vector3 [i][j]<<" ";


    }
}

return 0;
}
