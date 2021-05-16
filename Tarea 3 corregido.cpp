#include "iostream"
#include "conio.h"
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

bool esEntero(string);

int main() {

string num;
	int numero;
	bool repite = true;
    int matriz [100][100], columnas, filas;
    int i,j;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
        }
    }
        
    do 
    {
    cout<<"Digite un numero\n ["<<i<<"]["<<j<<"]";
    cin>>matriz[j][i];    
    getline(cin, num);

    if (esEntero(num)){
        repite=false;
    }else {
        cout<<"No has ingresado un valor entero Intentalo nuevamente" << endl;
    }
    }while (repite);
    numero= atoi(num.c_str());
    cout<<"El numero ingresado fue:"<<numero<<endl;
    cin.get();
    return 0;
}

bool esEntero(string num){
    bool esEntero=true;
    int longitud=num.size();
    int indice;

    if (longitud ==0){
        esEntero=false;
    } 
    else if (longitud==1 && !isdigit(num[0])) {
        esEntero = false;
    } 
    else if (int indice = 0;)
            if (num[0] == '+' || num[0] == '-') {
			indice = 1;
        } else {
            indice=0;
        }
        while (indice < longitud){
            if (!isdigit(num[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}
	
    void program();
	
    return esEntero;	
}

void program()
{    
    int matriz [3][3], fila,columna;    
 //Mostrando la matriz
    cout<<"Matriz transpuesta"<<endl;
    for(int i=0; i<fila;i++){
        for(int j=0; j<columna;j++){
            cout<<matriz[j][i];
        }
        cout<<"\n";
    }

    //Mostrando la matriz transpuesta
    cout<<"Matriz original"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            cout<<matriz[i][j];
        }
    }
    getch();

}