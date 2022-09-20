#include <iostream>

using namespace std;

int main(){
    int sum=0;
    int x;
    for( x=0; x<=1000; x++)
    {
        if (x%3==0||x%5==0){
            sum=sum+x;
            cout<<sum<<endl;
        }
    }
     return 0;
}