#include <iostream>

using namespace std;

class point{
    private:
     int x,y;
    public:
     point(int _x, int _y): x(_x),y(_y){}
     void setpointX(int _x){
         x=_x;
     }
     int getpointX()const{
         return x;
     }
     void setpointY(int _y){
         y=_y;
     }
     int getpointY(int){
        return y;
     }
     void print() const{
         std:: cout <<""<<x<<","<<y<< std::endl;
     }
};

