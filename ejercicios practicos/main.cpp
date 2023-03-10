/**
Salida: La suma de los números impares es 100
Espero que estos ejercicios te ayuden a practicar programación lineal alternativa y cíclica
*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x = 0;
    for (int i =1; i<100; i+=2){
        x+=i;
        if (x>=100){
            break;
        }
    }
    cout<<x;

    return 0 ;
}
