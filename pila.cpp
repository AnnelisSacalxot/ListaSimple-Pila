#include <iostream>
#include <stdlib.h>
using namespace std;

int pila[10], valor = -1; 

//funciones
void ingresarDato(){
    //evaluando si se puede agregar un valor o esta lleno
    if (valor<9)
    {
        cout<<"Introduzca el dato: "<<endl;
        cin>>pila[valor+1];
        valor++;
        cout<<"Valor agregado correctamente"<<endl;
        system("PAUSE");
    }else{
        cout<<"¡La pila esta llena!"<<endl;
        system("PAUSE");
    }
    
}

void sacarDato(){
    if (valor>-1)//se verifica si esta vacia
    {
        valor--;
        cout<<"Se elimino el valor: "<<pila[valor+1]<<endl<<endl;
        system("PAUSE");
    }else{
          cout<<"No se puede sacar el valor ¡La pila esta vacia! "<<endl<<endl;
        system("PAUSE");
    }
    
}

void evaluarElementos(){
    if (valor == -1)
    {
        cout<<"¡La pila esta vacia!"<<endl;
        system("PAUSE");
    }else{
        cout<<"La pila tiene elementos"<<endl;
        system("PAUSE");
    }
    
}

void imprimirElementos(){
    if (valor>-1)
    {
        cout<<"\t [ "<<endl;
        //imprimiendo primero el ultimo hasta el primero
        for (int i = valor; i >-1 ; i--)
        {
            cout<<pila[i]<<" , "<<endl;
        }
        cout<<" ] "<<endl;
        system("PAUSE");
        
    } else{
        cout<<" No hay elementos ¡La pila esta vacia!"<<endl;
        system("PAUSE");
    }
    

}

int main(){
    int opcion;

    while (opcion != 0)
    {
        cout<<"Eliga la opción que desee: "<<endl;
        cout<<"1. Ingresar valor"<<endl;
        cout<<"2. Sacar dato"<<endl;
        cout<<"3. Elementos de pila"<<endl;
        cout<<"4. Imprimir pila"<<endl;
        cout<<"0. Salir"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 0:
            
            break;
        case 1:
            ingresarDato();
            break;
        case 2:
            sacarDato();
            break;
        case 3:
            evaluarElementos();
            break;
        case 4:
            imprimirElementos();
            break;                                            
        default:
            cout<<"Error la opcion no existe"<<endl;
            system("PAUSE");
            break;
        }
    }
    
}