#include <iostream>

using namespace std;

int main(){
    int n,num,soma=0,media;

    cout<<"Digite um valor inteiro"<<endl;
    cin>>n;
    cout<<"Digite "<<n<<" numeros"<<endl;
    for(int i=0; i<n; i++){
        //cout<<"Digite "<<n<<" numeros"<<endl;
        cin>>num;
        soma=soma+num;
        media=soma/n;
    }
    cout<<"A media eh: "<<media<<endl;
    return 0;
}
