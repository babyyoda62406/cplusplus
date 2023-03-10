/**
Programa que busca el elemento más grande en una matriz usando ciclos anidados

Entrada: [[3, 4, 5], [6, 7, 8], [1, 2, 9]]
Salida: El elemento más grande es 9
*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int matriz [3] [3];
    int x =0;

    for (int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            cin>>matriz[i][j];
        }
    }
    for (int i =0; i<3; i++){
        for(int j =0; j<3; j++){
        if (x<matriz[i][j]){
            x= matriz[i][j];
        }
        }
    }
    cout<<"el mayor numero de la matriz es:"<<x<<endl;
    return 0 ;
}
