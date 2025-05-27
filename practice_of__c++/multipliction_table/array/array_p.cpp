#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int count=0;
    int choice;

    while(1)
    {
        cout<<"1:add value"<<endl;
        cout<<"2:display value"<<endl;
        cout<<"3:exit"<<endl;
        cout<<"enter choice";
        cin>>choice; 
    }
    switch (choice)
    {
        case 1:
        /* code */
        if(count<10){
            cin<<"enter a value:";
            cin>>value;
            arr[count]=val;
            count++;
            cout<<"value inserted";
        }

    }
}