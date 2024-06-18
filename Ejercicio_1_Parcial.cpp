#include <iostream>
#include <vector>

using namespace std;
///->La idea es crear un vector para
///mostrarlo
///agregarle dos valores atras y volverlo a mostrar
///sacarle el tercer valor y volver a mostrarlo

void MostrarVector(vector<int>numeritos){
for(int i;i<numeritos.size();i++){
    cout<<numeritos[i]<<" ";
}

}

int main (){
vector<int> Numeritos = {1,2,3,4,5};
cout<<"el vector iniciar es "<<endl;
MostrarVector(Numeritos);

Numeritos.push_back(6);
Numeritos.push_back(7);
Numeritos.push_back(8);

cout<<endl<<"El Vector Modificado es "<<endl;
MostrarVector(Numeritos);

vector<int> NuevoVector;
for(int i=0;i < Numeritos.size(); i++){
    if(Numeritos[i]!=Numeritos[2]){
    NuevoVector.push_back(i+1);
    }
}
cout<<endl<<"el vector sin el tercer valor es"<<endl;
MostrarVector(NuevoVector);

return 0;
}
