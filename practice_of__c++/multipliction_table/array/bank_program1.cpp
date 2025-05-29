#include<iostream>
using namespace std;
int main(){
    int bank_arr[5];
    int count=0;
    int balance,withdraw,deposit,choice,acccountno,ch;
    do{
        cout<<"enter choice";
        cin>>choice;
        switch(choice)
       {

        cout<<"1:add account number";
        cout<<"2:add balance";
        cout<<"3:enter withdraw amount";
        cout<<"4:enter deposit amount";
        cout<<"5:show balance";

        case 1:
        if(count<5)
        {
        cout<<"add accountno";
        cin>>acccountno;
        bank_arr[count]=acccountno;
        count++;
        }
        else{
            cout<<"array is full";      
        }     
           /*  code */ 
           break;

        case 2:
        cout<<"add balance";
        cin>>balance;
        break;
        
        case 3:
        cout<<"enter withdraw amount";
        cin>>withdraw;
        balance=balance-withdraw;
        break;

        case 4:
        cout<<"enter deposit amount";
        cin>>deposit;
        balance=balance+deposit;
        break;

        case 5:
        for(int i;i<count;i++){
            cout<<bank_arr[i]<<endl;
            cout<<"total balance"<<balance;
        
    }
    break;
    case 6:
    exit(1);
    break;
    default:
      break;
}
cout<<"do you want to continue...";
cin>>ch;
    }
      while(choice=7);

}
