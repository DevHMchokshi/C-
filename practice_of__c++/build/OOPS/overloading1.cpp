#include<iostream>
using namespace std;
class person{
    public:
        
    virtual void demo(){
        cout<<"parent class method ";
    }
    
};
class student:public person{
    public:
        
    void demo(){
        cout<<"student class method";
 }
};
int main(){
    person= p;
    student s;
    p=&s;
    p->demo();
}

// method overriding
// pointer ref
// derived class calle from base class
// virtual keyboard 