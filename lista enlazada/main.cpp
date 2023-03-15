
#include <bits/stdc++.h>

using namespace std;



template  <typename T> struct Nodo{
    T dato ;
    Nodo<T>* sig = nullptr;
};


template <typename T> void  agregar(T t, Nodo<T> *cabeza = nullptr){

}

template <typename T> void escribir(Nodo<T> *cabeza){

    while(cabeza->sig != nullptr ){
        cout<<cabeza->dato ;
        cabeza = cabeza->sig<<" ";
    }

    cout<<cabeza->dato<<" ";
}

int main(){
    Nodo<int>cabeza , n1 , n2 ;
    cabeza.dato = 1 ;
    n1.dato = 2 ;
    n2.dato = 3 ;




    return 0;
}

