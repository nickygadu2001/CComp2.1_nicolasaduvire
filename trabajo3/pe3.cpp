#include <iostream>

using namespace std;

int facto(int y){
    int x;
    for(x=2;x<y;x++){
        if(y%x!=0){
            x=x+1;
            while(y%x==0){
            cout<< x <<endl;
            y=y/x;
        }
        }
        else{
            while(y%x==0){
            cout<< x <<endl;
            y=y/x;
        }
        }
    } 
    return y;
}
int main (){
    int w=100;
    int q= facto(w);

    cout<< q <<endl;
    
    return 0;
}