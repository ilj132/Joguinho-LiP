#include <iostream>

using namespace std;

int MMC(int , int );
int MDC(int , int );
int main()
{
    int a,b;
    cout<<"Digite A e B"<<endl;
    cin>>a>>b;

    cout<<MMC(a,b)<<endl;
    return 0;
}
int MMC(int a, int b)
{
    int mult;
    for(int i=1;i<(a==b);i++){
        a*=i;
        b*=i;
        mult=a;
    }
    return mult;
}
int MDC(int a, int b)
{

}
