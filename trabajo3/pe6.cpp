#include <iostream>

using namespace std;

int main(){
    int x;
    int y=0;
    int z=0;
    int w=0;
    int a=0;
    for(x=0;x<=100;x++){
        y=y+x;
        w=y*y;
        z=z+(x*x);
        cout<<w-z<<endl; 
    }
    return 0;
}