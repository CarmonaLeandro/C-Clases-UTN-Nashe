#include <iostream>
#include <vector>

using namespace std;
/**Nos piden que escribamos la función asientosDisponibles(), que tome como parámetro un conjunto de asientos disponibles y el asiento que quiere ocupar la persona. Nuestra función deberá verificar si el asiento solicitado se encuentra disponible y devolverle un mensaje claro y prolijo al cliente.
#### *Resultado esperado:*

*/

void BuscadorDeAsientos (vector<int> AsientosDisponibles,int AsientoDeseado){
bool Asiento;
Asiento=false;


for(int i=0; i<AsientosDisponibles.size(); i++){
    if(AsientosDisponibles[i]==AsientoDeseado){Asiento=true;}
}
if(Asiento)
    {cout<<"el asiento "<<AsientoDeseado<<" esta disponible";}
else{cout<<"el asiento "<<AsientoDeseado<<" no esta disponible";}
}

int main (){
vector<int>AsientosDisponibles = {15, 54, 82 ,12, 32};
int AsientoDeseado;
cout<<"ingrese el asiento que deasea ocupar ";
cin>>AsientoDeseado;


BuscadorDeAsientos(AsientosDisponibles,AsientoDeseado);

return 0;
}
