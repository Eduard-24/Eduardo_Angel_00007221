#include "iostream"
using namespace std;

const int longCad = 20;
struct
{
    char nombreEmpleado[longCad +1][50];
    float sueldo[50];
    int dui[50];
} empleado;


void informe(int nEmpleados)
{
    string rut;
    cout<<"\nInformacion de empleados"<<endl;
    for (int i = 0; i < nEmpleados; i++)
    {   
        cout<<"Ingrese el nombre del empleado: "<< i+1 << ": ";
        cin.getline(empleado.nombreEmpleado[i],40);
        cout<<"Ingrese el sueldo de su empleado en dolares: $";
        cin >> empleado.sueldo[i];
        cout<<"Ingrese el dui del empleado: ";
        cin >> empleado.dui[i];
        Rut r(rut);
        r.verificaRut();
        int suma = 0, resto;
            char resultado, dcorrecto;

            // Validaciones: largo de 10 caracteres, ausencia de 0 inicial y existencia del guión
            if (largo == 10 && ceroinicial != '0' && guion == '-' )
            {
                suma =  ((rut[7]-'0')*2) + //Se llama a la posición y al restarle '0' se pasa a int
                        ((rut[6]-'0')*3) +
                        ((rut[5]-'0')*4) +
                        ((rut[4]-'0')*5) +
                        ((rut[3]-'0')*6) +
                        ((rut[2]-'0')*7) +
                        ((rut[1]-'0')*2) +
                        ((rut[0]-'0')*3);

                resto = suma % 11;
                resultado = 11 - resto;

            }
            else {
                cout << "\nError en el formato del DUI: debe tener 8 dígitos, no comenzar en 0, tener guion y dígito verificador"
                << endl;
            }

            if (resultado == 10){
                dcorrecto = 'K';
            }
            else if (resultado == 11){
                dcorrecto = '0';
            }
            else{
                dcorrecto = resultado;
            }

            if (dcorrecto == digito ){
                cout << "\nEl rut está correcto!" << endl;
            }
            else{
                cout << "\nRut está incorrecto! " << endl;
            }
        
    }
    return;
    
}
void informe(int nEmpleados)
{
    cout<<"\tVer empleados"<<endl;
    for (int i = 0; i < nEmpleados; i++)
    {
        cout<<"Nombre del empleado: "<< empleado.nombreEmpleado[i]<<endl;
        cout<<"Sueldo base: "<< empleado.sueldo[i]<<endl;
        cout<<"DUI del empleado: "<< empleado.dui[i]<<endl;
        
            // Validaciones: largo de 10 caracteres, ausencia de 0 inicial y existencia del guión
            if (largo == 10 && ceroinicial != '0' && guion == '-' )
            {
                suma =  ((rut[7]-'0')*2) + //Se llama a la posición y al restarle '0' se pasa a int
                        ((rut[6]-'0')*3) +
                        ((rut[5]-'0')*4) +
                        ((rut[4]-'0')*5) +
                        ((rut[3]-'0')*6) +
                        ((rut[2]-'0')*7) +
                        ((rut[1]-'0')*2) +
                        ((rut[0]-'0')*3);

                resto = suma % 11;
                resultado = 11 - resto;

            }
            else {
                cout << "\nError en el formato del DUI: debe tener 8 dígitos, no comenzar en 0, tener guion y dígito verificador"
                << endl;
            }

            if (resultado == 10){
                dcorrecto = 'K';
            }
            else if (resultado == 11){
                dcorrecto = '0';
            }
            else{
                dcorrecto = resultado;
            }

            if (dcorrecto == digito ){
                cout << "\nEl rut está correcto!" << endl;
            }
            else{
                cout << "\nRut está incorrecto! " << endl;
            }
        
    }
    return;
    
}
//Sueldos con descuentos de renta y seguro
void planilla(int nEmpleados)
{
    cout<<"\tTu planilla de empleados"<<endl;
    float t;
    for (int i = 0; i < nEmpleados; i++)
    {
        cout<<"Nombre del empleado: "<<empleado.nombreEmpleado[i]<<endl;
        t = empleado.sueldo[i] * 0.135;//t = al descuento del seguro y la renta de una vez
        cout<<"Sueldo Bruto: "<<empleado.sueldo[i]<<endl;
        cout<<"Descuento de ISS (3.5%) y Renta (10%): "<<t<<endl;
        cout<<"Sueldo Neto: "<<empleado.sueldo[i]-t<<endl;
        cout<<"Dui del empleado: "<< empleado.dui[i]<<endl;
        
            // Validaciones: largo de 10 caracteres, ausencia de 0 inicial y existencia del guión
            if (largo == 10 && ceroinicial != '0' && guion == '-' )
            {
                suma =  ((rut[7]-'0')*2) + //Se llama a la posición y al restarle '0' se pasa a int
                        ((rut[6]-'0')*3) +
                        ((rut[5]-'0')*4) +
                        ((rut[4]-'0')*5) +
                        ((rut[3]-'0')*6) +
                        ((rut[2]-'0')*7) +
                        ((rut[1]-'0')*2) +
                        ((rut[0]-'0')*3);

                resto = suma % 11;
                resultado = 11 - resto;

            }
            else {
                cout << "\nError en el formato del DUI: debe tener 8 dígitos, no comenzar en 0, tener guion y dígito verificador"
                << endl;
            }

            if (resultado == 10){
                dcorrecto = 'K';
            }
            else if (resultado == 11){
                dcorrecto = '0';
            }
            else{
                dcorrecto = resultado;
            }

            if (dcorrecto == digito ){
                cout << "\nEl rut está correcto!" << endl;
            }
            else{
                cout << "\nRut está incorrecto! " << endl;
            }
        


    }
    
}
void menu()
{
    int nEmpleados=0;
    int opcMenu;
    do
    {   
        cout<<"\nBienvenido: \n";
        cout<<"\nSeleccione una opcion: \n";
        cout<<"\n1.Ingresar datos de empleado. \n";
        cout<<"\n2.Ver informe de empleado. \n";
        cout<<"\n3.Ver planilla de empleados. \n";
        cout<<"\n4.Salir. \n";
        cin>>opcMenu;
        switch (opcMenu)
        {
        case 1:
            cout<<"Cantidad de empleados"<<endl;
            cin>>nEmpleados;
            informacion(nEmpleados);
            break;
        case 2:
            informe(nEmpleados);
            break;
        case 3:
            planilla(nEmpleados);
            break;
        case 4:
        cout<<"Tenga un feliz dia"<<endl;
            break;

        default:
        cout<<"Opcion invalida, intentelo de nuevo"<<endl;
            break;
        }
    }while (opcMenu != 4);
    
    
}
int main()
{
    menu();
    getchar();
    return 0;
}