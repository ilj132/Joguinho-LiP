/*2. A comissão da questão anterior deseja agora saber qual é valor geralmente
pago por um cargo. Para ajudá-la você deve escrever uma função
repeteM ais, que recebe um array v com o valor do salário de um cargo,
e a quantidade n de elementos de v, e retorna o valor do salário que
mais se repete em v. Em caso de empate, retorne o valor do cargo que
possui maior valor. Faça a leitura/escrita dos dados na função principal
(main).
• Entrada: v = { 1000, 2000, 1000, 3000, 1000 }
• Saída: 1000
• Entrada: v = { 4000, 1000, 10000, 3000, 3000, 4000 }
• Saída: 4000
*/

#include <iostream>

using namespace std;

int repeteMais(float[],int n);
int main()
{
    int n;
    cout<<"Digite a quantidade de cargos: "<<endl;
    cin>>n;
    float salarios[n];
    cout<<"Digite os salários: "<<endl;
    for(int i=0; i<n; i++){
        cin>>salarios[i];
    }
    cout<<"O salario que mais se repete eh: "<<repeteMais(salarios,n)<<endl;
}
int repeteMais(float v[], int n)
{
    int cont=0,cont2=0,maisrepetido,k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i]==v[j]){
                cont++;
            }
        }
        if(cont>=cont2){
            cont2=cont;
            maisrepetido=v[i];
            k=i;
        }
    }
    return v[k];
}
