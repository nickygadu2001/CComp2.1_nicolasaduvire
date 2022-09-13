#include <iostream>
//fuelType (tipo de cadena)
//año de fabricación (tipo int)
//color (tipo de cadena)
using namespace std;

class vehiculo{
    private:
         string marca;
         string fueltype;
         int añodfab;
         string color;
         int enginecap;
    public:
         vehiculo(string,string,int,string);
         void carro();
};
vehiculo::vehiculo(string _marca,string _fueltype,int _añodfab,string _color,int _enginecap){
    marca = _marca;
    fueltype = _fueltype;
    añodfab = _añodfab;
    color = _color;
    enginecap = _enginecap;

}
void vehiculo::carro(){
    cout<<marca<<endl;
    cout<<fueltype <<endl;
    cout<<añodfab<<endl;
    cout<< color <<endl;
    cout<< enginecap <<endl;

}

int main(){
    vehiculo v1("toyota","k23r",1999,"rojo","sir")
    
}
