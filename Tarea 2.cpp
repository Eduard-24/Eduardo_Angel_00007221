#include "iostream"
using namespace std;

int main(){
    char letra;
    
    cout<<"Por favor ingrese una letra "<<endl;
    cin>>letra;
  
    switch (letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    
    cout<<"Es una vocal\n"<<endl;
    break;
    
    default:
    cout<<"No es una vocal\n"<<endl;
    break;
    }

    cout<<"Gracias por intentar"<<endl;
    return 0;
} 