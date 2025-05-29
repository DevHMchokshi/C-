#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int count=0;
    int choice;
    int value;

    while(1)
    {
        cout<<"1:add value"<<endl;
        cout<<"2:display value"<<endl;
        cout<<"3:exit"<<endl;
        cout<<"enter choice: ";
        cin>>choice; 
        switch (choice)
        {
            case 1:
            if(count<10){
                cout<<"enter a value: ";
                cin>>value;
                arr[count]=value;
                count++;
                cout<<"value inserted"<<endl;
            }
            else{
                cout <<"array is full"<<endl;
            }
            break;       
            case 2:
            for(int i=0;i<count;i++){ 
                cout<<arr[i]<<endl;
            }
            break;
            case 3:
            return 0;
            default:
            cout<<"invalid choice"<<endl;
            break;
        }
    }
}
