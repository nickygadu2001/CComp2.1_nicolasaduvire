#ifndef __POINT_H__
#define __POINT_H__

template <typename T>
class point2
{
private:
    T x,y;
public:
    point2(const T u=0,const T v=0);x(u)y(v);
    T getX()const{return x;}
    T getY()const{return y;}
    //~point2();
};
/*
point2::point2()
{
}

point2::~point2()
{
}*/
#endif