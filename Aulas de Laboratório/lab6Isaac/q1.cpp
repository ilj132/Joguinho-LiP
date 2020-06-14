#include <iostream>

using namespace std;

int main()
{
    int V[30],n,x;
    bool encontrou=false;
    cout<<"Digite quantas vendas teve: "<<endl;
    cin>>n;
    cout<<"Digite os valores das vendas."<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>V[i];
    }
    cout<<"Digite o valor da venda que voce quer encontrar"<<endl;
    cin>>x;
    for(int i=0; i<n ; i++)
    {
        if(V[i]==x)
        {
            encontrou=true;
        }
    }
    if(encontrou)
    {
        cout<<"Sim, existe uma venda no valor de R$"<<x<<endl;
    }
    else
    {
        cout<<"Nao existe uma venda nesse valor"<<endl;
    }
    return 0;
}
