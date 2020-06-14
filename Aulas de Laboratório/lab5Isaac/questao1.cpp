#include <iostream>

using namespace std;

void divisao(int ,int ,int& ,int& );
int main()
{
    int x,y,q,r;

    cout<<"Digite x e y"<<endl;
    cin>>x>>y;
    divisao(x,y,q,r);
    cout<<"Quociente: "<<q<<"\nResto: "<<r;
    return 0;
}
void divisao(int x,int y,int& q,int& r){
    q=x/y;
    r=x%y;
}
