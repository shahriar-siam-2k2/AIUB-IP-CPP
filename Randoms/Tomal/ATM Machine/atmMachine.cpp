#include <iostream>
using namespace std;

class atmMachine{
    private:
        double balance, WDamount, Tamount;
        string Uname, Uacc, Tacc, Tname;
        int Tcount=0, WDcount=0;
    public:
        atmMachine(double bl, string nm, string acc){
            balance = bl;
            Uname = nm;
            Uacc = acc;
        }
        double withdraw(){
            cout << endl << "Enter withdraw amount: ";
            cin >> WDamount;
            if(balance >= WDamount){
                balance -= WDamount;
                WDcount++;
                cout << endl << "Successfully Withdrawn." << endl;
            }
            else{
                cout << "Insufficient bank balance!" << endl;
            }
            return balance;
        }
        double transfer(){
            cout << endl << "Enter recipient bank account number: ";
            cin >> Tacc;
            cout << "Enter recipient name: ";
            cin >> Tname;
            cout << "Enter transfer amount: ";
            cin >> Tamount;
            if(balance >= Tamount){
                balance -= Tamount;
                Tcount++;
                cout << endl << "Money Transfered to " << Tname << "(" << Tacc << ") Successfully." << endl;
            }
            else{
                cout << "Insufficient bank balance!" << endl;
            }
            return balance;
        }
        void transactions(){
            cout << endl << "Showing recent transactions:" << endl;
            cout << "Transfer Status- " << endl;
            if(Tcount > 0){
                cout << "Account number: " << Tacc << endl;
                cout << "User name: " << Tname << endl;
                cout << "Amount transfered: " << Tamount << " Taka" << endl;
            }
            else{
                cout << "No transfer status found!" << endl;
            }
            cout << endl << "Withdrawal Status-" << endl;
            if(WDcount > 0){
                cout << "Withdrawal amount: " << WDamount << " Taka";
            }
            else{
                cout << "No withdrawal status found!" << endl;
            }
        }
        ~atmMachine(){
            cout << endl << endl << "Printing Your Information-" << endl;
            cout << "User Name: " << Uname << endl;
            cout << "User Account Number: " << Uacc << endl;
            cout << "User remaining balance: " << balance  << " Taka"<< endl;
        }
};


int main(){
    string name, account;
    double blnc;
    int op;
    bool check;
    cout << endl << "\t\tWelcome to SHAHRIAR ATM SERVICE" << endl;
    cout << endl << "Enter Your Name: ";
    cin >> name;
    cout << "Enter Your Bank Account Number: ";
    cin >> account;
    cout << "Enter Your Bank Balance: ";
    cin >> blnc;
    atmMachine user(blnc, name, account);

    cout << endl << "ATM Dashboard-" << endl;
    cout << "1. Withdraw Money." << endl;
    cout << "2. Transfer Money." << endl;
    cout << "3. Check Recent Transactions." << endl;
    cout << "Choose your option: ";
    cin >> op;
    if(op == 1){
        user.withdraw();

        cout << endl << "Do you want to Transfer Money? (No=0, Yes=1): ";
        cin >> check;
        if(check == true){
            user.transfer();
        }
        cout << endl << "Do you want to check recent transactions? (No=0, Yes=1): ";
        cin >> check;
        if(check == true){
            user.transactions();
            return 0;
        }
    }
    else if(op == 2){
        user.transfer();

        cout << endl << "Do you want to Withdraw? (No=0, Yes=1): ";
        cin >> check;
        if(check == true){
            user.withdraw();
        }
        cout << endl << "Do you want to check recent transactions? (No=0, Yes=1): ";
        cin >> check;
        if(check == true){
            user.transactions();
        }
    }
    else if(op == 3){
        user.transactions();
    }
    else{
        cout << endl << "INVALID INPUT!" << endl;
    }
    return 0;
}