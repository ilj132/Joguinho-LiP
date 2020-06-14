//ta errado
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool palindromo(char []);
int main(){
    char s1[100];
    cout<<"Digite a frase: "<<endl;
    cin.getline(s1,100);
    if(palindromo(s1)){
        cout<<"É um palindromo"<<endl;
    }
    else{
        cout<<"Não é palindromo"<<endl;
    }

    return 0;
}
bool palindromo(char s1[])
{
    int TAM=strlen(s1), cont=0;

    for(int i=0;i<TAM;i++){
        for(int j=TAM;j>0;j--){
            /*if(s1[i]==' '){
                i++;
            }
            if(s1[j]==' '){
                j--;
            }*/
            if(s1[i]==s1[j] && s1[i]!=' ' && s1[j]!=' ' ){
                cont++;
                break;
            }
        }
    }

    if(cont==TAM)
        return true;

    else
        return false;
}
