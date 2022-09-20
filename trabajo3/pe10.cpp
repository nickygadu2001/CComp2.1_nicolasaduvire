#include <iostream>

using namespace std;

int main(){
    int y=100;
    int x;
    int z=0;
    for(x=0;x<=y;x++){
        int c;
        int b=0;
        for (c=0;c<=x;c++){
            if (c%x==0){
                b=b+1;
            }
        }
        if (b<3){
            z=z+x;
            cout<<z<<endl;
        }
    }
    return 0;
}