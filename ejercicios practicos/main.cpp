/**
Programa que verifica si una palabra es un palíndromo utilizando un ciclo while
Entrada: "radar"
Salida: La palabra es un palíndromo
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
    string palabra = "";
    cin>>palabra;
    int x = 0;
    int finish = palabra.size()-1;
    while(x<=finish){
        if(palabra[x]!= palabra[finish]){
            cout<<"la palabra no es un palindromo"<<endl;
            return 0;
        }
        x++;
        finish--;
    }
    cout<<"la palabra es palindroma"<<endl;



    return 0 ;
}
