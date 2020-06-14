#include <iostream>

using namespace std;

int maior(int a, int b, int c){
    int maior;

    if(a>b && a>c){
        maior=a;
    }else if(b>a && b>c){
        maior=b;
    }else if(c>a && c>b){
        maior=c;
    }

    return maior;
}
int menor(int a, int b, int c){
    int menor;

    if(a<b && a<c){
        menor=a;
    }else if(b<a && b<c){
        menor=b;
    }else if(c<a && c<b){
        menor=c;
    }
    return menor;
}
int main(){
    int valorA,valorB,valorC;
    cout<<"Digite os valores de A,B,C respectivamente"<<endl;
    cin>>valorA>>valorB>>valorC;

    cout<<"O Valor maximo é: "<<maior(valorA,valorB,valorC)<<endl<<"E o Valor mínimo é: "<<menor(valorA,valorB,valorC)<<endl;
    return 0;
}
