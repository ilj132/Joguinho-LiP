/* Escreva uma função f que recebe um array de inteiros v e o seu nú-
mero de elementos n. A função f deve retornar 1 se os elementos de
v estão ordenados em ordem crescente, 2 se eles estão ordenados em
ordem descrescente e 0 caso eles não estejam ordenados. Faça a leitura/escrita
dos dados na função principal (main).
• Entrada: v = { 1, 4, 8, 10 }
• Saída: 1 (vetor ordenado em ordem crescente)
1
• Entrada: v = { 1001, 3, 2, 1 }
• Saída: 2 (vetor ordenado em ordem decrescente)
• Entrada: v = { 15, 1, 8, 6 }
• Saída: 0 (vetor não ordenado) */
#include <iostream>

using namespace std;

int f(int[], int );
int main()
{
    int n;
    cout<<"Digite os quantos elementos o vetor possui: "<<endl;
    cin>>n;
    int v[n];
    cout<<"Digite as entradas do vetor: "<<endl;
    for(int i=0; i<n; i++)
        cin>>v[i];
    cout<<f(v,n);
}
int f(int v[],int n)
{
    int cont=0,cont2=0;
    for(int i=0; i<(n-1); i++){
        if(v[i]>v[i+1]){
            cont++;
        }else if(v[i]<v[i+1]){
            cont2++;
        }
    }
    if(cont==(n-1))
        return 1;
    else if(cont2==(n-1))
        return 2;
    else
        return 0;
}
