#include <iostream>
#include"pointArray.h"

pointArray::pointArray(int size) {
    data = new int[size];
    this->size = size;
}

pointArray::pointArray(const pointArray &o) {
    size = o.size;
    data = new int[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void pointArray::setAt(int index, int value) {
    if(index >= 0 && index < size)
        data[index] = value;
}

int pointArray::getAt(int index) const {
    if(index >= 0 && index < size)
        return data[index];            
}

int pointArray::getSize() const {
    return size;
}

void pointArray::print() const {
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << std::endl;
}

pointArray::~pointArray() {
    delete [] data;
}
