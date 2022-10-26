#include <iostream>

using namespace std;

class is{
public:
    int *data;
    int size;

    is(int size){
    data = new int[size];
    this->size = size;
    }
    ~is(){
    delete[] data;
    }
};

int main(){
    is a(2);
    a.data[0]=4; a.data[1]=2;
    if(true){
        is b=a;
        }
    cout<<a.data[0]<<endl;//cuand se salga de estre programa, el a.data se encontrara con suy destructor, por lo tanto se hara debit,se elimina su espacio de memoria,el espacio 0 es eliminado
}
