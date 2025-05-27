// multipication table 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows for the multiplication table:";
    cin>>n;

    cout<<"multiplication table for "<<n<<":\n";
    for(int i=1;i<=10;i++){

        cout<<n<<"x"<<i<<"="<<n*1<<endl;
    }
}