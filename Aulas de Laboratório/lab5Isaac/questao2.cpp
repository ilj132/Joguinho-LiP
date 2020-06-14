#include <iostream>

using namespace std;

void calcHora(int& ,int& , int& );
int main()
{
    int T, h,m;
    cout<<"Digite os segundos"<<endl;
    cin>>T;
    calcHora(T,h,m);

    cout<<h<<" horas(s), "<<m<<" minuto(s) e "<<T<<" segundo(s)"<<endl;

    return 0;
}
void calcHora(int& T, int& h, int& m)
{
    h=T/3600;
    m=(T-(h*3600))/60;
    T=(T-(h*3600)-(m*60));
}
