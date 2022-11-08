#include <iostream>
#include "pointArray.h"

using namespace std;

int main() {

    pointArray a(2);    

    a.setAt(0, 34);
    a.setAt(1, 35);

    a.print();

    if(true) {
        pointArray b = a;
    }
 
    return 0;
}
