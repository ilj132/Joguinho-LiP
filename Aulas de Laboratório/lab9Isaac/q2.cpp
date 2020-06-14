//tá incompleta

#include <iostream>

using namespace std;

void removeElementos(int [], int [], int& , int );
int main()
{
    int n1,n2;
    cout<<"Digite os tamanhos do primeiro e do segundo vetor respectivamente: "<<endl;
    cin>>n1>>n2;

    int v1[n1],v2[n2];
    cout<<"Digite as componentes de v1: "<<endl;
    for(int i=0; i<n1; i++)
    {
        cin>>v1[i];
    }
    cout<<"Digite os componentes de v2: "<<endl;
    for(int i=0; i<n2; i++)
    {
        cin>>v2[n2];
    }
    removeElementos(v1,v2,n1,n2);
    for(int i=0; i<n1; i++)
        cout<<v1[i]<<" ";
    return 0;
}
void removeElementos(int v1[],int v2[],int& n1,int n2)
{
    int aux[n1],a=0;
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(v1[i]==v2[j])
            {

            }
        }
    }
    for(int i=0; i<a;i++)
    {
        v1[i]=aux[i];
    }
    n1=a;
}
