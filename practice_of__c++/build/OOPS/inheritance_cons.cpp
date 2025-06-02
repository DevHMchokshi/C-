#include<iostream>
using namespace std;
class parent
{
    public:
    parent(int a)
    {
        cout<<a;
    }
};
class child:public parent
{
    public:
    child(int a) : parent(10)
    {
        cout<<"\nchild class variable is : "<<a;
    }
};
int main()
{
    child(20);
}

