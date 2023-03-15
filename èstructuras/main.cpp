
#include <bits/stdc++.h>

using namespace std;


struct Carro{
    string modelo;
    int pasajeros;
    int puertas;
};


int main(){
    Carro mustang;
    mustang.modelo = "mustang bm21";
    mustang.pasajeros = 2;
    mustang.puertas = 4;
     cout<<"el carro es un: "<<mustang.modelo<<" que tiene: "<<mustang.pasajeros<<"pasajeros y "<<mustang.puertas<<"puertas"<<endl;




    return 0;
}

