#include <iostream>

using namespace std;

int soma(int x, int y){
    int somav=0;

    for(int i=x; i<=y; i++){
        somav=somav+i;
    }

    return somav;
}
int main(){
    int x0,y0;

    cout<<"Declare os valores de X e Y"<<endl;
    cin>>x0>>y0;

    cout<<"Soma["<<x0<<", "<<y0<<"] = "<<soma(x0,y0)<<endl;

    return 0;
}
