#include <iostream>
using namespace std;

struct bank{
    string accNo, accName;
    double balance;

    void Set_AccInfo(){
        cout << endl << "Enter Account No: ";
        getline(cin, accNo);
        cout << "Enter Account Name: ";
        getline(cin, accName);
        cout << "Enter Account Balance: ";
        cin >> balance;
        cin.ignore();
    }
    void Print_AccInfo(){
        cout << endl << "User Account Informations-";
        cout << endl << "Account No: " << accNo;
        cout << endl << "Account Name: " << accName;
        cout << endl << "Account Current Balance: " << balance << endl;
    }
    int check_operation(){
        int o;
        cout << endl << "For Deposit, press 1.";
        cout << endl << "For Withdraw, press 0." << endl;
        cin >> o;
        if(o==1 || o==0){
            return o;
        }
        else{
            cout << "Invalid Input." << endl;
            check_operation();
        }
    }
    double deposit(){
        double amount;
        cout << endl << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount;
        return balance;
    }
    double withdraw(){
        double amount;
        cout << endl << "Enter Withdraw Amount: ";
        cin >> amount;
        if(balance >= amount){
            balance -= amount;
        }
        else{
            cout << endl << "INSUFFICIENT BALANCE!" << endl;
        }
        return balance;
    }
    int check_exit(){
        int e;
        cout << endl << "Press 1 for run another account.";
        cout << endl << "Press 0 for exit." << endl;
        cin >> e;
        if(e==1 || e==0){
            return e;
        }
        else{
            cout << "Invalid Input." << endl;
            check_exit();
        }
    }
};

int main(){
    cout << endl << "\t\t WELCOME TO SHAHRIAR BANK LTD." << endl << endl;
    bank user;
    do{
        user.Set_AccInfo();
        if(user.check_operation() == 1){
            user.deposit();
            bool w;
            cout << endl << "Do you want to withdraw? (press 1 for YES, press 0 for NO)" << endl;
            cin >> w;
            if(w==1){
                user.withdraw();
            }
        }
        else{
            user.withdraw();
            bool w;
            cout << endl << "Do you want to deposit? (press 1 for YES, press 0 for NO)" << endl;
            cin >> w;
            if(w==1){
                user.deposit();
            }
        }
        user.Print_AccInfo();
    }
    while(user.check_exit()==1);
    return 0;
}