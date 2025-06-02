#include<iostream>
using namespace std;
class person {
 protected:
 int a=10;
 public:
 // constructor   
    person() {
        cout << "base class" << endl;
}

};
class child : public person {
    public:
    child() {
        cout << "child class" ;
        cout << "protected var"<< a << endl;
    }
};

int main() {
    // make an object of child class only
    child c;
}