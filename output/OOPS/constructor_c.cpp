// method overloading

#include <iostream>
using namespace std;
class person {

public:
    
void demo() {
        cout << "Default constructor called" << endl;
    }

    void demo(int a) {
        cout << a << endl;
    }

    void demo(string s){
        cout<< s << endl;
    }
};
int main() {
    person p;
    // call function
    p.demo();
    p.demo(12);
    p.demo("test");

}