#include "iostream"
using namespace std;
int main ()
{
    float a,b,c,d,e;
    float average;
    
    cout<<"Ingrese su #1"<<endl;
    cin>>a;
    cout<<"Ingrese su #2"<<endl;
    cin>>b;
    cout<<"Ingrese su #3"<<endl;
    cin>>c;
    cout<<"Ingrese su #4"<<endl;
    cin>>d;
    cout<<"Ingrese su #5"<<endl;
    cin>>e;

    average=a+b+c+d+e/5;

    cout<<"El promedio es:"<<average<<endl;
    
    int numero1,numero2,numero3,numero4,numero5,aux;
    cout<<"Ingrese su #1"<<endl;
    cin>>numero1;
    cout<<"Ingrese su #2"<<endl;
    cin>>numero2;
    cout<<"Ingrese su #3"<<endl;
    cin>>numero3;
    cout<<"Ingrese su #4"<<endl;
    cin>>numero4;
    cout<<"Ingrese su #5"<<endl;
    cin>>numero5;
    
   
    numero1=numero2;
    numero2=numero3;
    numero3=numero4;
    numero4=numero5;
    numero5=aux;

    return 0;

}