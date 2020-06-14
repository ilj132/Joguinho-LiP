#include <iostream>

using namespace std;

int main()
{
    int V[30], U[30], n,o,cont=0;

    cout<<"Digite quantas vendas o primeiro vendedor fez: "<<endl;
    cin>>n;
    cout<<"Digite os codigos das vendas do primeiro vendedor: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>V[i];
    }
    cout<<"Digite quantas vendas o segundo vendedor fez: "<<endl;
    cin>>o;
    cout<<"Digite os codigos das vendas do segundo vendedor: "<<endl;
    for(int i=0; i<o; i++)
    {
        cin>>U[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<o; j++)
        {
            if(V[i]==U[j])
            {
                cont++;
            }
        }
    }

    cout<<cont<<" produto(s) em comum"<<endl;
    return 0;
}
