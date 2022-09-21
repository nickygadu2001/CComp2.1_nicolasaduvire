#include <iostream>

using namespace std;

bool multid(int y, int x ){
    bool z;
    if (y==0)
    {
        z=true;
        return z;
    }
    return (y%x!=0)? false: multid(y,x-1);
}
int main (){
    int a=20;
    int b=a;
    while(!multid(a,b)){
        b=b+10;
    }
    cout<< b << endl;
    return 0;
}