#include <iostream>

using namespace std;

int main(){
    int a(7);
    int* aPtr=&a;
    cout<<"la direccion de la variable es "<<&a<<"\nEl valor de aPtr es"<< aPtr;
    cout<<"\nEl el valor de a es"<< a <<"\nEl valor de *aPtr es "<<*aPtr<<endl;

    /*yRef=200;

    cout <<*yPtr<<endl;*/
}