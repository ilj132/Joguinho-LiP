#include <iostream>

using namespace std;

int main(){
    int num, menor;
    cout<<"Digite os numeros"<<endl;
    cin>>num;
    menor=num;
    do{
        if(num<menor){
            menor=num;
        }
        cin>>num;
    }while(num!=0);

    cout<<"O menor numero eh: "<< menor<<endl;
    return 0;
}
