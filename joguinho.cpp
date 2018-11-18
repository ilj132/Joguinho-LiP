#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
//#include <cstdio>

using namespace std;

int analisa(char [40][40],int , int );
void geraJogo(char [40][40], char [40][40]);
void imprimirmatriz(char [40][40]);
void mininhas(char [40][40],char [40][40],char , int , int );
void descobrir(char [40][40],char [40][40],bool ,int , int );
void cafifosa(char [40][40],char [40][40],int ,int );
void revela(char matriz1[40][40],char matriz2[40][40], int linhas, int colunas);
bool parada(int contminas);

int linhas,colunas,minas;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int o, tempo=time(NULL),dt,contminas,melhorestempos[10]= {0};

    char matriz1[40][40],matriz2[40][40];

    bool jogando=false;

    srand(time(NULL));

    cout<<"Bem-Vindo ao Campo Minado, digite um número:"<<endl<<"1 - Novo Jogo"<<endl<<"2 - Melhor Tempo"<<endl<<"3 - Sair"<<endl;
    cin>>o;

    switch(o)
    {
    case 1:
        int dif;
        cout<<"Digite a dificuldade do Jogo desejada:\n1-Fácil\n2-Difícil\n3-Personalizado"<<endl;
        cin>>dif;
        switch(dif)
        {
        case 1:
            linhas=colunas=8;
            minas=10;
            contminas=minas;
            jogando=true;
            break;
        case 2:
            linhas=colunas=16;
            minas=40;
            contminas=minas;
            jogando=true;
            break;
        case 3:
            cout<<"Digite o número de Linhas do jogo(máximo 40): "<<endl;
            cin>>linhas;
            cout<<"Digite o número de Colunas do jogo(máximo 40): "<<endl;
            cin>>colunas;
            cout<<"Digite o número de Minas do jogo: "<<endl;
            cin>>minas;

            while(linhas>40 && colunas>40 && minas<=((colunas*linhas)-10))
            {
                if(linhas>40)
                {
                    cout<<"Numero de Linhas Inválido, digite novamente: "<<endl;
                    cin>>linhas;
                }

                else if(colunas>40)
                {
                    cout<<"Numero de Colunas Inválido, digite novamente: "<<endl;
                    cin>>colunas;
                }

                else if(((linhas*colunas)-10)>=minas)
                {
                    cout<<"Numero de Minas Inválido, digite novamente: "<<endl;
                    cin>>minas;
                }
            }
            contminas=minas;
            jogando=true;
            break;

        }
        break;
    case 2:
        for(int i=0; i<10; i++)
            cout<<melhorestempos[i]<<" segundo(s)"<<endl;
        break;
    case 3:
        return 0;
        break;
    default:
        cout<<"Número inválido, inicie o jogo novamente."<<endl;
    }

    geraJogo(matriz1,matriz2);
    imprimirmatriz(matriz2);
    imprimirmatriz(matriz1);

    while(jogando)
    {
        dt=time(NULL)-tempo;

        if(parada(contminas)){
            cout<<"VOCÊ É TOP, CONSEGUIU DESCOBRIR TODAS AS MINAS, CARA, MEUS PARABÉNS!!!"<<endl;
            revela(matriz1,matriz2,linhas,colunas);
            imprimirmatriz(matriz1);
            jogando=false;
            break;
        }

        int col, lin;
        char op;

        cout<<"Minas a marcar: "<<contminas<<endl;
        cout<<"D --> Descobrir quadrado\nM --> Marcar Mina\nT --> Talvez Mina(ainda infuncional) \nL --> Limpar Marcação(ainda infuncional)\nS --> Sair"<<endl;
        cout<<"Digite a opção seguida das coordenadas do quadrado: ";
        cin>>op>>lin>>col;

        if(col<colunas && lin<linhas)
        {
            switch(op)
            {
            case 'D':
                cout<<"Tempo de Jogo: "<<dt<<" segundo(s)"<<endl;
                descobrir(matriz1,matriz2,jogando,lin,col);
                break;
            case 'M':
                cout<<"Tempo de Jogo: "<<dt<<" segundo(s)"<<endl;
                mininhas(matriz1,matriz2,op,lin,col);
                contminas--;
                break;
            case 'T':
                cout<<"Tempo de Jogo: "<<dt<<" segundo(s)"<<endl;
                mininhas(matriz1,matriz2,op,lin,col);
                break;
            case 'L':
                cout<<"Tempo de Jogo: "<<dt<<" segundo(s)"<<endl;
                mininhas(matriz1,matriz2,op,lin,col);
                break;
            case 'S':
                jogando=false;
                break;
            default:
                cout<<"Opção incorreta"<<endl;
            }
        }
        else
            cout<<"Numero de linhas ou colunas incorreto, digite novamente."<<endl;
    }
}

void geraJogo(char matriz1[40][40], char matriz2[40][40])
{
    int geraLinha,geraColuna;

    for(int n=0; n<minas; n++)
    {
        geraLinha=rand()%linhas;
        geraColuna=rand()%colunas;
        if(matriz2[geraLinha][geraColuna]=='*')
        {
            n--;
        }
        else
            matriz2[geraLinha][geraColuna]='*';
    }

    for(int i=0; i<linhas; i++)
    {
        for(int j=0; j<colunas; j++)
        {
            matriz1[i][j]='.';

            if(matriz2[i][j]!='*')
                matriz2[i][j]='0'+analisa(matriz2,i,j);

        }
    }
}

void imprimirmatriz(char matriz[40][40])
{
    int contX=0,contY=0,v[50];
    for(int i=0;i<50;i++)
    {
        v[i]=i;
    }
    cout<<endl<<"   ";

    for(int i=0; i<colunas; i++)
        if(i<10)
            cout<<"0"<<v[i]<<" ";
        else
            cout<<v[i]<<" ";

    cout<<endl<<endl;

    for(int i=0; i<linhas; i++)
    {
        if(i<10)
            cout<<"0"<<v[i]<<"  ";
        else
            cout<<v[i]<<"  ";

        for(int j=0; j<colunas; j++)
        {
            cout<< matriz[i][j]<< "  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int analisa(char matriz2[40][40],int m, int n)
{
    int cont=0;

    for(int i=m-1; i<=m+1; i++)
    {
        for(int j=n-1; j<=n+1; j++)
        {
            if(matriz2[i][j]=='*')
            {
                cont++;
            }
        }
    }
    return cont;
}

void descobrir(char matriz1[40][40],char matriz2[40][40],bool jogando,int lin, int col)
{

    if(matriz2[lin][col]=='*')
    {
        matriz1[lin][col]=matriz2[lin][col];
        imprimirmatriz(matriz1);
        cout<<"VOCÊ ESCOLHEU UMA MINA E PERDEU O JOGO"<<endl;
        jogando=false;
    }

    else if(matriz2[lin][col]=='0')
    {
        matriz1[lin][col]=matriz2[lin][col];
        cafifosa(matriz1,matriz2,lin,col);
        imprimirmatriz(matriz1);
    }
    else{
        matriz1[lin][col]=matriz2[lin][col];
        imprimirmatriz(matriz1);
    }
}

void cafifosa(char matriz1[40][40],char matriz2[40][40],int lin,int col)
{
    for(int i=lin-1; i<=lin+1; i++)
    {
        for(int j=col-1; j<=col+1; j++)
        {
            if(matriz1[i][j]!='M' && matriz1[i][j]!='T'){
                matriz1[i][j]=matriz2[i][j];

                if(matriz2[i][j]=='0')
                {
                        matriz2[i][j]='_'; //para evitar repetições
                        cafifosa(matriz1,matriz2,i,j);
                }

                else if(matriz2[lin][col]>'0' && matriz2[lin][col]<='8')
                    matriz1[lin][col]=matriz2[lin][col];
            }
        }
    }
}

void mininhas(char matriz1[40][40],char matriz2[40][40],char op, int lin, int col)
{
    if(op=='M' && matriz1[lin][col]!='M')
    {
        matriz1[lin][col]='M';
        imprimirmatriz(matriz1);
    }
    else if(op=='T' && matriz1[lin][col]!='T')
    {
        matriz1[lin][col]='?';
        imprimirmatriz(matriz1);
    }
    else if(op=='L' && matriz1[lin][col]=='?' || matriz1[lin][col]=='M')
    {
        matriz1[lin][col]='.';
        imprimirmatriz(matriz1);
    }
    else
    {
        cout<<"Opção inválida, digite novamente."<<endl;
        imprimirmatriz(matriz1);
    }
}
void revela(char matriz1[40][40],char matriz2[40][40], int linhas, int colunas)
{
    for(int i=0; i<linhas;i++)
    {
        for(int j=0; j<colunas; j++)
            matriz1[i][j]=matriz2[i][j];
    }
}

bool parada(int contminas)
{
    if(contminas==0)
        return true;
    else
        return false;
}
