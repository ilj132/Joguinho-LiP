#include <iostream>

using namespace std;

int main()
{
    int V[30], n,cont=0;
    bool busca=false;

    cout<<"Digite quantas vendas teve: "<<endl;
    cin>>n;
    cout<<"Digite os valores das vendas: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>V[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(V[i]==V[j])
            {
                cont++;
            }
        }
    }
    if(cont>n)
    {
        cout<<"Existe vendas no mesmo valor"<<endl;
    }
    else
    {
        cout<<"Não existe vendas no mesmo valor"<<endl;
    }
    return 0;
}
