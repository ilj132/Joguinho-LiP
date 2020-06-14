#include <iostream>
#include <cstring>

using namespace std;

bool ehIgual(char [],char []);
int main()
{
    char s1[100],s2[100];
    cout<<"Digite a String: ";
    cin.getline(s1,100);
    cout<<"Digite a segunda String: ";
    cin.getline(s2,100);
    int TAM1=strlen(s1), TAM2=strlen(s2);
    if(TAM1==TAM2){
        if(ehIgual(s1,s2)){
            cout<<"São iguais"<<endl;
        }
        else
            cout<<"São diferentes"<<endl;
    }
    else
        cout<<"São diferentes"<<endl;
    return 0;
}
bool ehIgual(char s1[],char s2[])
{
    int TAM=strlen(s1), cont1=0;

    for(int i=0;i<TAM;i++){
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]=s1[i]-32;

        if(s2[i]>='a' && s2[i]<='z')
            s2[i]=s2[i]-32;

        if(s1[i]==s2[i])
            cont1++;
    }

    if(cont1==TAM)
        return true;

    else
        return false;
}
