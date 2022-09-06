#include <iostream>
using namespace std;

int main(){
    int a ;
    int b ;
    int c ;
    
    std::cout<<"ingrese num1:"<< cin >> a;
    std::cout<<"ingrese num1:"<< cin >> b;
    std::cout<<"ingrese num1:"<< cin >> c;

    if (a%b==0){
        std::cout<<b<<"es factor de"<<a, endl;

    }
    else{
        std::cout<<b<<"no es factor de"<<a, endl;
    }
    if (a%c==0){
        std::cout<<c<<"es factor de"<<a, endl;

    }
    else{
        std::cout<<c<<"no es factor de"<<a, endl;
    }
    return 0
}