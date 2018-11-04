#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void iniciante();
void gerarmatriz2(char [][10],int );
int analisa(char [][10],int , int );
bool descobrir(char matrizinicial2[][10],char matrizinicial[][10],int linha, int coluna);
void imprimirmatriz(char matriz[][10]);
int main()
{
    int o;
    srand(time(NULL));
    cout<<"Bem-Vindo ao Campo Minado, digite um número:"<<endl<<"1 - Novo Jogo"<<endl<<"2 - Melhor Tempo"<<endl<<"3 - Sair"<<endl;
    cin>>o;
    switch(o)
    {
    case 1:
        iniciante();
        break;
    case 2:
        cout<<"nada ainda"<<endl;
        break;
    case 3:
        return 0;
        break;
    default:
        cout<<"Número inválido, inicie o jogo novamente."<<endl;
    }
}

void iniciante()
{
    char matrizinicial[10][10], matrizinicial2[10][10];
    int minas=10,minacont=10, gera, gera2, cont=0, cordy=0, cordx=0, linha, coluna;
    cout<<" ";
    for(int i=0;i<8;i++)
    {
        cout<<" "<<cordx++;
    }
    cout<<endl;
    for(int i=0; i<8; i++)
    {
        cout<<cordy++<<" ";
        for(int j=0; j<8; j++)
        {

            matrizinicial[i][j]='.';
            matrizinicial2[i][j]='.';
            cout<<matrizinicial[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<< endl;
    gerarmatriz2(matrizinicial2,minas);
    cout<<"   MATRIZ TESTE"<<endl;
    imprimirmatriz(matrizinicial2);

    do{
    cout<<"Digite as coordenadas da linha e da coluna respectivamente"<<endl;
    cin>>linha>>coluna;
    if(descobrir(matrizinicial2,matrizinicial,linha,coluna))
    {
        break;
    }
    }while(linha>=0 && linha<8 && coluna>=0 && coluna<8);
}

void gerarmatriz2(char matrizinicial2[][10],int minas)
{
    int gera,gera2;
    for(int i=minas; i>0; i--){

            gera=rand()%8;
            gera2=rand()%8;
            if(matrizinicial2[gera][gera2]=='*')
            {
                i++;
            }
            else
                matrizinicial2[gera][gera2]='*';
    }

    for(int i=0; i<8;i++){
        for(int j=0; j<8; j++){
            if(matrizinicial2[i][j]!='*')
                matrizinicial2[i][j]= '0' + analisa(matrizinicial2,i,j);
        }
    }
}

bool descobrir(char matrizinicial2[][10],char matrizinicial[][10],int linha, int coluna)
{
    if(matrizinicial2[linha][coluna]=='*')
    {
        matrizinicial[linha][coluna]=matrizinicial2[linha][coluna];
        imprimirmatriz(matrizinicial);
        cout<<"VOCE ESCOLHEU UMA MINA E PERDEU O JOGO"<<endl;
        return true;
    }
    else
    {
        matrizinicial[linha][coluna]=matrizinicial2[linha][coluna];
        imprimirmatriz(matrizinicial);
        return false;
    }
}

void imprimirmatriz(char matriz[][10])
{
    int cordx=0,cordy=0;
    cout<<" ";
    for(int i=0;i<8;i++)
    {
        cout<<" "<<cordx++;
    }
    cout<<endl;
    for(int i=0; i<8;i++){
        cout<<cordy++<<" ";
        for(int j=0; j<8; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

int analisa(char matrizinicial2[][10],int m, int n)
{
    int cont=0;

    for(int i=m-1; i<=m+1; i++){
        for(int j=n-1; j<=n+1; j++)
        {
            if(matrizinicial2[i][j]=='*'){
                cont++;
            }
        }
    }
    return cont;
}
