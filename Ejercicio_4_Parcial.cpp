#include <iostream>

using namespace std;
string miniCompilador(const string& secretMessage){
int resultado=0;
for(int i=0; i<=secretMessage.length();i++){
    if(secretMessage[i]=='#'){resultado=resultado+1;}
    if(secretMessage[i]=='@'){resultado=resultado-1;}
    if(secretMessage[i]=='*'){resultado=resultado*resultado;}
    if(secretMessage[i]=='&'){cout<<resultado;}
}
}


int main (){
 string secretMessage = "&###@&*&###@@##@##&######@@#####@#@#@#@##@@@@@@@@@@@@@@@*&&@@@@@@@@@####@@@@@@@@@#########&#&##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@&";
string resultado = miniCompilador(secretMessage);

cout<<resultado<<endl;
return 0;
}
