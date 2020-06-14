#include <iostream>

using namespace std;

bool perfeito(int x){
    int somadiv=0;
    bool np=false;
    for(int i=1; i<x; i++){
        if(x%i==0){
            somadiv=somadiv+i;
        }
    }
    if(somadiv==x){
            np=true;
    }
    if(np){
        return true;
    }else{
        return false;
    }
}
int main(){
    int x0;
    cout<<"Digite o valor de X"<<endl;
    cin>>x0;

    if(perfeito(x0)){
        cout<<x0<<" é perfeito"<<endl;
    }else{
        cout<<x0<<" não é perfeito"<<endl;
    }
    return 0;
}
