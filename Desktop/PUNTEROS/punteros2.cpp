#include<iostream>
using namespace std;
int pedir_valor();
void cambiar_valor(int *puntero);
void mostrar_resultado(int x);
// *puntero = &x;
int pedir_valor(){
    int num;
    cout<<"Digite un numero:";
    cin>>num;
    return num;
}
void cambiar_valor(int *puntero){
    int nuevo_num;
    cout<<"Digite un numero";
    cin>>nuevo_num;
    *puntero = nuevo_num;
}

void mostrar_resultado(int x){
    cout<<"El nuevo valor es :"<<x<<endl;
}

int main(){
    int valor = pedir_valor();//10
    // valor=15;
    cambiar_valor(&valor);
    
    mostrar_resultado(valor);
}