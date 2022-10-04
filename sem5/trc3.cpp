#include <iostream>

using namespace std;

void impri (int a){
    cout <<"el entero es:" << a <<endl;
}

int suma(int x , int y){
    return x+y;
}

class point{
    private:
        int x,y;
    public:
        point(int,int);
        void setpoint(int x,int y);
        int getpointX();
        int getpointY();
};
void point::setpoint(int _x ,int _y ){
    x=_x;
    y=_y;
}

int point::getpointX(){
    return x;
}
int point::getpointY(){
    return y;
}

int main(){
    int q=4;
    int r=6;
    int result= suma(q,r);
    point p1{q,r};
}