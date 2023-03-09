/**
Programa que determina si un número es primo o no utilizando un ciclo for

Entrada: 7
Salida: El número 7 es primo
*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int entrada =0,valor =0;
    cin>>entrada;

        if( entrada!= 2 && entrada!=3 && entrada != 5){
            if (entrada % 2 != 0 && entrada % 3 != 0 && entrada % 5 !=0){
                cout<<" este es un numero primo"<<endl;
            }else{
                cout<<"este   nooooooooooooooo es un numero primo"<<endl;

                }
        }



}
