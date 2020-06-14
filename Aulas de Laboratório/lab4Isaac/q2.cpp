#include <iostream>

using namespace std;

int fatorial(int x){
    int fat=1;
    for(int i=1; i<=x; i++){
        fat=fat*i;
    }
    return fat;
}
int somaFat(int x, int y){
    return fatorial(x)+fatorial(y);
}
int main(){
    int x0,y0;
    cout<<"Digite os valores de x e y"<<endl;
    cin>>x0>>y0;

    cout<<x0<<"! + "<<y0<<"! = "<<somaFat(x0,y0)<<endl;
    return 0;
}
