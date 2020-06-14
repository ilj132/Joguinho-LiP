//tá errado
#include <iostream>

using namespace std;

int main()
{
    int V[30], n,cont=0,cont2=0;

    cout<<"Digite quantas vendas teve: "<<endl;
    cin>>n;
    cout<<"Digite os valores das vendas: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>V[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=(i+1); j<n; j++)
        {
            if(V[i]!=V[j])
            {
                cont++;
            }
        }
        if(cont==0){
            cont2++;
        }
    }

    cout<<cont2<<endl;
    return 0;
}
