#include <iostream>

using namespace std;

class usuario{
    private:
        int retiro;
        int saldo;
        string nombre;
    public:
        usuario(int,int,string);
        void opbanca();
};

usuario::usuario(int _saldo,int _retiro, string _nombre){
    saldo = _saldo;
    retiro = _retiro; 
    nombre= _nombre;
}

void usuario::opbanca(){
    int _opebanca;
    _opebanca = saldo-retiro;
    if(_opebanca<0){
        cout<<"El monto del retiro excedió el saldo de la cuenta"<<endl;
    }
    else{
        cout<<"su saldo actual es"<<_opebanca <<endl;
        }
}

int  main(){
    usuario p1(120,120,"rosa del mar");
    usuario p2(1200,400,"soila Vaca");
    p1.opbanca();
    p2.opbanca();
    return 0;
}