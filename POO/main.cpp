
#include <bits/stdc++.h>

using namespace std;

/**Ejercicio: Crea una clase Vehiculo con los atributos marca,
modelo y a�o, y los m�todos obtenerMarca(),
obtenerModelo(), obtenerA�o() y mostrarInformacion().
Luego, crea una clase hija llamada Auto ,
que herede de la clase Vehiculo y agregue los atributos
cantidadPuertas y capacidadCarga, respectivamente.
La clase hija debe tener su propio m�todo mostrarInformacion(),
que muestre la informaci�n espec�fica de cada   veh�culo
*/

class Vehiculo{
    protected:
        string marca ;
        string modelo;
        string anno  ;

    public:
        Vehiculo(string m, string mod, string a){
        marca = m  ;
        modelo= mod;
        anno  = a  ;
        };
    string obtenerMarca(){
        return marca;
        };
    string obtenerModelo(){
        return modelo;
        };
    string obtenerAnno(){
        return anno;
        };
    void mostrarInformacion(){
        cout<<"el auto de la marca: "<<marca
        <<"y del modelo: "<<modelo
        <<"es del anno: " <<anno<<endl;
        };
    };
class Auto : public Vehiculo{
    private:
        int cantidadPuertas;
        int capacidadCarga ;

    public:
        Auto(int cantpuertas, int capcarga,string m, string mod, string a):Vehiculo( m,  mod,  a){
            cantidadPuertas = cantpuertas;
            capacidadCarga  = capcarga   ;
            };
        void mostrarInformacion(){
        cout<<"el auto de la marca: "<<marca
        <<" y del modelo: "<<modelo
        <<" es del anno: " <<anno
        <<" tiene "<<cantidadPuertas<<"puertas"
        <<" y una capcidad de carga de: "<<capacidadCarga<<"kilogramos"<<endl;
        };
    };




int main(){
    Auto t(4,2000,"Tesla","Tesla bxrg1", "2020");
    t.mostrarInformacion();




    return 0;
}

