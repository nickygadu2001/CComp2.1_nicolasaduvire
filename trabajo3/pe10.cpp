#include <iostream>

using namespace std;

int numdiv(int x , int y ) {
    if (y==0){
        return true;
    }
    return (x%y!=0) ? false:numdiv(x,y-1);
}

int main(){
    int z=20;
    int w=z;
    while (!(numdiv(w,z))){
        w=w+10;
    }
    cout<<w<<endl;
    return 0; 
}