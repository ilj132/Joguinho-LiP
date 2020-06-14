#include <iostream>

using namespace std;

int juntaOrdenado(int [], int [], int [], int );
void ordena(int [], int );
int main()
{
    int n;
    cout<<"Digite o tamanho do vetor: ";
    cin>>n;
    int v1[n],v2[n],v3[2*n];
    cout<<"Digite os valores do primeiro vetor: "<<endl;
    for(int i=0; i<n;i++)
    {
        cin>>v1[i];
    }
    cout<<"Digite os valores do segundo vetor: "<<endl;
    for(int i=0; i<n;i++)
    {
        cin>>v2[i];
    }
    juntaOrdenado(v1,v2,v3,n);
    for(int i=0; i<2*n; i++)
        cout<<v3[i]<<" ";

    return 0;
}
int juntaOrdenado(int v1[],int v2[], int v3[], int n)
{
    ordena(v1,n);
    ordena(v2,n);
    int a=2*n,j=0, k=0;
    int i = 0;
    while(i<a)
    {
        v3[i]=v1[j];
        j++;
        i++;

        v3[i]=v2[k];
        k++;
        i++;
    }
}
void ordena(int v[], int n)
{
    int aux;
    for(int i=0; i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            if(v[i]>v[j])
            {
                    aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
            }
        }
    }
}
