#include<iostream>

using namespace std;

int main(){
    int n;
    int w;
    int x=1;
    int y=2;
    int z=0;
    cout<<"digite";cin>>n;

    for(w=0 ; w<=n ; w++)
    {
        z=x+y;
        cout<< z << endl;
        x=y;
        y=z;
    };
    return 0;

}