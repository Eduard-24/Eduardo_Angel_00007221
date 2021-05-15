#include "iostream"
#include "conio.h"
#include "string"

using namespace std;
bool esEntero(string);
void program()
{
    int matriz [100][100], columnas, filas;
    string linea;
	int numero;
	bool repite = true;
    
    //Almacenando elementos en la Matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
                
            do {
            cout<<"Digite un numero\n ["<<i<<"]["<<j<<"]";
            cin>>matriz[j][i];    
            getline(cin, linea);
		
    		if (esEntero(linea)) {
			repite = false;
            } else {
			cout << "No has ingresado un valor entero. Intentalo nuevamente" << endl;
            }
        	} while (repite);
	
        	numero = atoi(linea.c_str());
	
        	cout << "El numero ingresado fue: " << numero << endl;
	
        	cin.get();
            }

            bool esEntero(string linea) {
	        bool esEntero = true;
	        int longitud = linea.size();
            }
	        if (longitud == 0) {
		    esEntero = false;
	        } else if (longitud == 1 && !isdigit(linea[0])) {
		    esEntero = false;
	        } else {
		    int indice = 0;
		    if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
    		} else {
			indice = 0;
           }         
        }
    }   

        
    //Mostrando la matriz
    cout<<"Matriz transpuesta"<<endl;
    for(int i=0; i<filas;i++){
        for(int j=0; j<columnas;j++){
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

int main()
{

program();

return 0;

}