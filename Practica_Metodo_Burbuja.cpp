#include <iostream>
#include <vector>
using namespace std;

vector<int> Burbuja(vector<int>Vectores){
int aux;
for(int i=0; i<Vectores.size()-1;i++){
    for (int j=i+1; j<Vectores.size();j++)
    if(Vectores[i]<Vectores[j]){
       aux=Vectores[i];
       Vectores[i]=Vectores[j];
       Vectores[j]=aux;
       }
}
return Vectores;
}

int main (){
vector<int>Vectores = {5,6,7,1,3,4,2,8,10,9};
Vectores=Burbuja(Vectores);
for(int i=0; i<Vectores.size();i++){
    cout<<Vectores[i]<<" ";
}

return 0;
}
