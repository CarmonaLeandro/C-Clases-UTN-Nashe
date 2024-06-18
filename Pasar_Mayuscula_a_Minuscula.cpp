#include <iostream>

using namespace std;
/** Lograr pasar a minuscula
*/
int main (){
int largo;
string Palabra;

cout<<"ingrese una palabra sin espacio ";
cin>>Palabra;

largo = Palabra.length();
char PalabraMin[largo];
char PalabraMin2[largo];
for (int i=0; i<largo; i++){
PalabraMin[i]= Palabra [i];
PalabraMin2[i] = tolower (PalabraMin[i]);

}

cout<<PalabraMin2<<endl;




return 0;
}
