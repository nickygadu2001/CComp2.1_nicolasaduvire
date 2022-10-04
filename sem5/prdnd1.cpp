#include<iostream>

using namespace std;

void arreg(int tam, int array[]){
    cout<<"[";
    for(int i=0;i<tam;i++){
        cout<<array[i]<<" ";
        cout<<"]"<< endl;

}
/*void cambio(){

}
*/
/*
void tamarray(int tami,int array[]){
    for(int y=0;y<tami;y++){
        if(array[y]<){
            for(int j= i+1;j<tam;j++){
                if (array[j]<array[i]){
                    ;
                }
            }

        }
    }
}
*/
int main(){
    int arreglo[]={5,3,6,9,8,2,7,4,1,0};
    int tam1 = sizeof(arreglo);
    cout<<tam1<<endl;

    
    return 0;
    }