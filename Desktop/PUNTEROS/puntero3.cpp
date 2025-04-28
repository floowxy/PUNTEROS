#include<iostream>
using namespace std;
int pedir_edad();
void cambiar_valor(int x, int *puntero);
void mostrar_resultado(int m, int n);

int pedir_edad(){
    int edad;
    cout<<"Digite su edad:";
    cin>>edad;
    while(edad<0){
        cout<<"Invalido.Digite nuevamente:";
        cin>>edad;
    }
    return edad;
}
void cambiar_valor(int x, int *puntero){
    int suma;
    suma = x + 5;
    *puntero = suma;
}
void mostrar_resultado(int m){
    cout<<"Su edad aumentada en 5 a;os es:"<<m<<endl;
}
int main(){
    int edad = pedir_edad();
    cambiar_valor(edad, &edad);
    mostrar_resultado(edad);
    system("pause");
    return 0;
}