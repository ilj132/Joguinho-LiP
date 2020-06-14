#include <iostream>

using namespace std;

int contaMaior(float[] ,int , float );
int main()
{
    int n;
    cout<<"Digite quantos cargos existem: "<<endl;
    cin>>n;
    float salarios[n];
    float X;
    cout<<"Digite os salarios de cada cargo: "<<endl;
    for(int i=0; i<n; i++){
        cin>>salarios[i];
    }
    cout<<"Digite a limiar X: "<<endl;
    cin>>X;
    cout<<"Nº de cargos com salario maior que limiar declarada: "<<contaMaior(salarios,n,X)<<endl;

    return 0;
}
int contaMaior(float V[], int n, float x)
{
    int cont=0;
    for(int i=0;i<n;i++){
        if(V[i]>x)
            cont++;
    }

    return cont;
}
