#include <iostream>
#include <iomanip>
#include <array>
#include <string>

using namespace std;
/*
int main() {
    array<int, 5> n{32,27,64,18,95};

    cout<<"elemento"<< setw(10)<<"value"<<endl;

    for (size_t i{0}; i < n.size();++i){
        cout<< setw(7)<<i<<setw(10)<< n[i]<<endl;
    }
}
IMPORTANTE ¿QUE ES UNA VARIABLE ESTATICA?
*/
class gradebook{
public:
    static const size_t students{10};

    gradebook(const std::array<int;students>& gradesarray):coursename{name}, grades{gradearray}{}

    void setcoursename(const std::string& name){
        coursename=name;
    }

    const std::string& getcoursename() const{
        return coursename;
    }

    void displaymessage() const{
    }
        std::cout<<"bienvenido al grado book for\n"<<getcoursename()<<"!"
};

