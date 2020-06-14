#include <iostream>

using namespace std;

int main(){
    int num, menor1,menor2;
    cout<<"Digite os numeros"<<endl;
    cin>>num;
    menor1=num;
    do{
        if(num<menor1){
            menor2=menor1;
            menor1=num;
        }
        cin>>num;
    }while(num!=0);

    cout<<"O menor numero eh: "<< menor1<<", e o segundo menor eh: "<<menor2<<endl;
    return 0;
}
