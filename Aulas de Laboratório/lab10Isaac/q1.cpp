#include <iostream>

using namespace std;

float mediaK(float [],int , int );
int main()
{
    int n, k;
    cout<<"Digite o número de alunos: ";
    cin>>n;
    float notas[n];
    cout<<"Digite as notas dos alunos: "<<endl;
    for(int i=0; i<n;i++)
        cin>>notas[i];
    cout<<"Digite o valor de K: ";
    cin>>k;

    cout<<"A média das "<<k<<" maiores notas é "<<mediaK(notas, n,k);
    return 0;
}
float mediaK(float notas[],int n, int k)
{
    float aux, soma, media;
    for(int i=0; i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
            {
                if(notas[i]<notas[j])
                {
                    aux=notas[i];
                    notas[i]=notas[j];
                    notas[j]=aux;
                }
            }
    }
    for(int i=0; i<k;i++)
    {
        soma+=notas[i];
        media=soma/k;
    }
    return media;
}
