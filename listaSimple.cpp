#include <stdlib.h>
#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
}*primero, *ultimo;

//funciones
void insertarValor(){
    Nodo* nuevoNodo = new Nodo();
    cout<<"Ingrese el valor: "<<endl;
    cin>>nuevoNodo->dato;
    //cuando la lista esta vacia
    if (primero == NULL)
    {
       primero = nuevoNodo;
       primero->siguiente = NULL;
       ultimo = nuevoNodo;
    }else{//ya hay algun valor en la lista
        ultimo->siguiente = nuevoNodo;
        nuevoNodo->siguiente = NULL;
        ultimo = nuevoNodo;
    }
    
}

void imprimirLista(){
    cout<<"Imprimiendo lista: "<<endl;
    Nodo* actual = new Nodo();
    actual = primero;
    if (primero!= NULL)
    {
        while (actual!= NULL)
        {
            cout<<""<<actual->dato;
            actual = actual->siguiente;
        }
        
    } else{
        cout<<"La lista esta vacia"<<endl;
    }
    
}


void buscarValor(int data){
    int contador = 0, posicion = 0;
    bool flag = false;
    cout<<"Buscando dato: "<<data<<"___"<<endl;
    Nodo* actual = new Nodo();
    actual = primero;
    if (primero!= NULL)
    {
        while (actual!= NULL)
        {
            contador++;
            if (actual->dato == data)
            {
                flag = true;
                posicion = contador;
                actual = actual->siguiente;
            }else{
                actual = actual->siguiente;
                //flag = false;
            }
            
        }if (flag)
        {
            cout<<"Encontrando el valor en posicion:"<<contador<<endl;
        }else{
            cout<<"Valor no encontrado"<<endl;
        }
        
        
    } else{
        cout<<"La lista esta vacia"<<endl;
    }
    
}

void modificarValor(int nuevoValor, int datoEliminar){
     int contador = 0, posicion = 0;
    bool flag = false;
    cout<<"Modificando dato: "<<datoEliminar<<"por: "<<nuevoValor<<endl;
    Nodo* actual = new Nodo();
    actual = primero;
    if (primero!= NULL)
    {
        while (actual!= NULL)
        {
            contador++;
            if (actual->dato == datoEliminar)
            {
                actual->dato = nuevoValor;
                flag = true;
                posicion = contador;
                actual = actual->siguiente;
            }else{
                actual = actual->siguiente;
                flag = false;
            }
            
        }if (flag)
        {
            cout<<"Se modifico correctamente"<<endl;
            imprimirLista();
        }else{
            cout<<"Valor no encontrado"<<endl;
        }
        
        
    } else{
        cout<<"La lista esta vacia"<<endl;
    }
}

void eliminarValor(int datoEliminar){
   // int contador = 0, posicion = 0;
    bool flag = false;
    cout<<"Eliminar dato "<<datoEliminar<<"___"<<endl;
    Nodo* actual = new Nodo();
    actual = primero;
    if (primero!= NULL)
    {
        while (actual!= NULL)
        {
            if (actual->dato == datoEliminar)
            {
                actual->dato = actual->siguiente->dato;
                actual->siguiente = actual->siguiente->siguiente;
                flag = true;

            }else{
               actual = actual->siguiente;
            }
            
        } free(actual);
        if (flag)
        {
            cout<<"Dato eliminado"<<endl;
            imprimirLista();
        }else{
            cout<<"El dato no se pudo eliminar"<<endl;
        }
        
        
    } else{
        cout<<"La lista esta vacia"<<endl;
    }
};
int main(){

    insertarValor();
    insertarValor();
    insertarValor();
    insertarValor();
    insertarValor();
    imprimirLista();
    buscarValor(30);
    modificarValor(20,1);
    eliminarValor(25);

    return 0;
}