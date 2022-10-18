#include <iostream>

using namespace std;

int main(){

    int y(100);

    int& yRef(y);

    int* yPtr(nullptr);

    yPtr = &y;

    cout << yPtr << endl;
    cout << &y << endl;
    cout << yRef << endl;
    cout << *yPtr << endl;        
    cout << ++yRef << endl;
    cout << ++yRef << endl;
    cout << *yPtr << endl;        
    *yPtr = 1000;
    cout << y << endl;
    cout << ++yRef << endl;
    cout << ++y << endl;
    cout << yPtr << endl;
    *yPtr *= 1000;
    cout << y << endl;
    
    return 0;
}