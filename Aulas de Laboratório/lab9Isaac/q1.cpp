#include <iostream>

using namespace std;
int filtraPerfeito(int,int[],int[]);
bool ehPerfeito(int);
int main()
{
    int n,m;
    cout<<"Digite o tamanho do vetor parcero"<<endl;
    cin>>n;
    int v1[n],v2[n];
    cout<<"Digite os valores de v1: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    m=filtraPerfeito(n,v1,v2);
    for(int j=0; j<m; j++)
        cout<<v2[j]<<" ";
    return 0;
}

int filtraPerfeito(int n, int v1[], int v2[])
{
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(ehPerfeito(v1[i]))
        {
            v2[j]=v1[i];
            j++;

        }
    }
    return j;
}

bool ehPerfeito(int number)
{
    int soma=0;
    for(int i=1; i<number; i++)
    {
        if(number%i==0)
        {
            soma+=i;
        }
    }
    if(soma==number)
        return true;
    else
        return false;
}
