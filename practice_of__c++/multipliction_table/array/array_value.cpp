#include<iostream>
using namespace std;
// add datatypes character name
void array_function(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr[5];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    array_function(arr);
    return 0;
}