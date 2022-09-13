#include <iostream>

using namespace std;

class fecha{
    private:
         int mes;
         string dia;
         int año;
    public:
         fecha(int,string,int);
         void setmes(int);
         void huf(int, string ,int)

};

fecha::fecha(int _mes,string _dia,int _año){
    mes = _mes;
    dia = _dia;
    año = _año;
};

void fecha::setmes(int _mes){
    mes = _mes;
} 
void fecha::huf(){
    cout<<dia<<"/"<<mes<<"/"<<año<<endl;
}

int main(){
    fecha f1(5, "lunes",2001);
    f1.huf;
return 0;
}