#include <iostream>

using namespace std;

int main (){
    int x=1213;
    int y=2;
    while(x!=1){
        if (x%y==0){
            cout<< y <<endl;
            x=x/y;
        }
        else{
            int c;
            int e=0; 
            for(c=0;c<=y;c++){
                if(c%y==0){
                    e=e+1;

                }
                if(e>2){
                    
                } 
            }
        }
    }
    return 0;
}