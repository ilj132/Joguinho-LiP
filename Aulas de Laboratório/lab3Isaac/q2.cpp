#include <iostream>

using namespace std;

int main(){
    int num, cont=0, i=1;
    cout<<"Digite um numero ai po"<<endl;
    cin>>num;
    do{
        if(num%i==0){
            cont++;
        }
        i++;
    }while(i<=num);

    if(cont==2){
        cout<<"O Numero "<<num<<" eh primo"<<endl;
    }else{
        cout<<"O Numero "<<num<<" nao eh primo"<<endl;
    }
    return 0;
}
