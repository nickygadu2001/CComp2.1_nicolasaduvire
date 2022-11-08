#ifndef __POINTARRAY_H__
#define __POINTARRAY_H__

/**
 * Arreglo de enteros estático representado en una clase
*/
class pointArray {
        int size;
        int *data;        
    public:
        pointArray(int size);
        pointArray(const pointArray &o);

        void setAt(int index, int value);
        int getAt(int index) const ;
        int getSize() const ;
        void print() const ;

        ~pointArray();
};

#endif