#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void iniciante();
int analisa(char [][10],int , int );
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
    char matrizinicial[10][10],matrizinicial2[10][10],cordx='A';
    int minas=10,minacont=10,gera,gera2,cont=0,cordy=1,op;
    for(int i=0; i<8; i++)
    {
        cout<<cordy++<<" ";
        //cout<<cordx++<<" ";
        for(int j=0; j<8; j++)
        {
            matrizinicial[i][j]='.';
            matrizinicial2[i][j]='.';
            cout<<matrizinicial[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<< endl;

    for(int i=minas; i>0; i--){

            gera=rand()%8;
            gera2=rand()%8;
            if(matrizinicial2[gera][gera2]=='*')
            {
                gera=rand()%8;
                gera2=rand()%8;
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

    do{
        cout<< "Minas a marcar: "<<minacont<<endl;
        cout<<"D --> Descobrir quadrado"<<endl;
        cout<<"M --> Marcar mina"<<endl;
        cout<<"T --> Talvez mina"<<endl;
        cout<<"L --> Limpar Marcação"<<endl;
        cout<<"S --> Sair"<<endl;

    }while(op=='S' || op=='s');

    for(int i=0; i<8;i++){
        for(int j=0; j<8; j++){
            cout<<matrizinicial2[i][j]<<" ";
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
