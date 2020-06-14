#include <iostream>

using namespace std;

float menorNota(float& , float& , float& );
float calcNota(float& , float& , float& );
int main()
{
    float n1,n2,n3;
    cout<<"Digite as 3 notas"<<endl;
    cin>>n1>>n2>>n3;

    cout<<calcNota(n1,n2,n3)<<endl;

    return 0;
}
float calcNota(float& n1, float& n2, float& n3)
{
    float nec;
    if((n1+n2+n3)>=15){
        cout<<"não precisa de nada p/ passar"<<endl;
        nec=0.0;
    }
    else{
        nec=(n1+n2+n3)-menorNota(n1,n2,n3);
        nec=15-nec;
    }
    return nec;
}
float menorNota(float& n1, float& n2, float& n3)
{
    float menor;
    if(n1<n2 && n1<n3)
        menor=n1;
    else if(n2<n1 && n2<n3)
        menor=n2;
    else
        menor=n3;
    return menor;
}
