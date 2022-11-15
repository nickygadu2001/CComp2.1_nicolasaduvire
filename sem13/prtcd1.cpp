#include<iostream>

using namespace std;

template<typename T,typename U>
U sum (const T a,const U b){
    return a + b ;
}

int main(){
    cout<<sum<int,double>(12345,9.8765)<< endl;
    cout<<sum<double,int>(1.3424,314)<< endl;
    cout<<sum<string>("quiero ser"," una motomami")<<endl;
}