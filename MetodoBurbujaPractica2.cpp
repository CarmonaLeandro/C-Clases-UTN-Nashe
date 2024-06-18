#include <iostream>
#include <vector>

using namespace std;

int main () {
vector<int> Numeritos = {5,2,3,1,4};

for(int i=0; i<Numeritos.size();i++){
    cout<<Numeritos[i]<<" ";

}

for(int i=0; i<Numeritos.size()-1; i++){
    for(int j=i+1; j<Numeritos.size(); j++){
        if(Numeritos[i]>Numeritos[j]){
            int aux=Numeritos[i];
            Numeritos[i]=Numeritos[j];
            Numeritos[j]=aux;
        }
    }
}
cout<<endl;
for(int i=0; i<Numeritos.size();i++){
    cout<<Numeritos[i]<<" ";

}
return 0;
}
