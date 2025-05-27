#include<iostream>
using namespace std;
int a,b;
char op;
int choice;
int main(){
    cout<<"enter choice";
    cin>>choice;
    switch (choice);
    {
        // 1:- basic calculator
        // 2:- advace calculator
    }
    case 1:
    /* code */
    cout<<"enter a and b ";
    cin>>a>>b;
    cout<<"enter oprand";
    cin>>op;

    switch (op)
    {
        case'+':
        /* code */
        cout<<a+b;
        break;
        case'-':
        cout<<a-b;
        case'*':
        cout<<a*b;
        case'/':
        cout<<a/b;
    }

}