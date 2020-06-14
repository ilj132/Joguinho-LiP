#include <iostream>

using namespace std;

int main(){
    int num, expoente,aux;
    float res=1, res2=1;

    cout<<"Digite um numero e um expoente respectivamente"<<endl;
    cin>>num>>expoente;

    if(expoente>0){
        for(int i=0; i<expoente; i++){
            res=num*res;
            aux=res;
        }
        cout<<res<<endl;
    }else{
        expoente=expoente*(-1);
        for(int i=0; i<expoente; i++){
            res2=num*res2;
            aux=res2;
        }
        res2=1/res2;
        cout<<res2<<endl;
    }

    return 0;
}
