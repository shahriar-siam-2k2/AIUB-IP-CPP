#include<iostream>
using namespace std;
struct Account{
    string AccNo;
    string AccName;
    double Balance;
void Set_AccountInfo(){
    cout<<"Enter Account Number:";
    cin>>AccNo;
    cout<<"Enter Account Holder Name:";
    cin>>AccName;
    cout<<"Enter Account Balance:";
    cin>>Balance;
}
void Print_AccountInfo(){
    cout<<"Account Number:"<<AccNo<<endl;
    cout<<"Account Holder:"<<AccName<<endl;
    cout<<"Account Current Balance:"<<Balance<<endl;
}
double Deposit(){
    double amount;
    cout<<"Enter Deposit amount:";
    cin>>amount;
    Balance=Balance+amount;
    return Balance;
}
double Withdraw(){
    double amount;
    cout<<"Enter Withdraw amount:";
    cin>>amount;
    if(Balance >= amount){
        Balance=Balance-amount;
    }
    else{
        cout << "Insufficient Balance!" << endl;
    }
    return Balance;
}
};
int main(){
Account A1;
A1.Set_AccountInfo();
A1.Print_AccountInfo();
A1.Deposit();
A1.Withdraw();
cout<<"Account Information after deposit and withdraw operation"<<endl;
A1.Print_AccountInfo();  
}