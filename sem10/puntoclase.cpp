#include<iostream>


using namespace std;

class point{
    public:
    point(int _x=0,int _y=0): x(_x), y(_y){
        std::cout<<"constructor"<<std::endl;
    }
    ~point(){
        std::cout<<"destructor"<< std::endl;
    }
    void setX(int _x){
        x=_x;
    }
    int getY()const{
        return x;
    }
    void setY(int _y){
        y=_y;
    }
    int getX()const{
        return y;
    }
    void print()const{
        std::cout<<"("<<x<<","<<y<<")"<<endl;
    }
    private:
       int x,y;
};
/*int main(){
    point p1;
    point p2(2,3);
    point p3(45,67);
    point p4(890,123);

    point arreglo[]={p1,p2,p3,p4};
    int tam=sizeof(arreglo)/ sizeof(arreglo[0]);

    point *ptr = &arreglo[0];

    for(int i=0;i<tam;i++,ptr++){
        ptr->print();
    }
    return 0;
}*/
