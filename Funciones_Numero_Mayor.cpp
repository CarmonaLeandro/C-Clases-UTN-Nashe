#include <iostream>

using namespace std;

int Maximo(int numero1, int numero2){
if(numero1<numero2){
        cout<<"es mayor "<<numero2;
}else if(numero1>numero2){
    cout<<"es mayor "<<numero1;
    }
}

int main() {

int PrimerNumero=5;
int SegundoNumero=3;
int resultado;

resultado= Maximo(PrimerNumero, SegundoNumero);


}
