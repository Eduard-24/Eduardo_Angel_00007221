#include "iostream"
#include "conio.h"

using namespace std;

void program()
{
    int matriz[3][3];

    for (int i=0; i<3; i++){
        for (int j = 0; j < 3; j++)
        {
        
        float a;
        do{
        cout<<"Digite un numero["<<i<<"]["<<j<<"]";
        cin>>matriz[i][j];a;
        }while ((a < 1) || (a-(int)a > 0));
    
        }
        //mostrando matriz original
        cout<<"Matriz original"<<endl;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
            cout<<matriz[i][j];
            }
        cout<<"\n";
        }
        //mostrando transpuesta
        cout<<"Matriz transpuesta"<<endl;
        for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matriz[j][i];
            }
        }
        getch(); 
    

        int main()
    {
        program();   
        return 0;
    }
}   