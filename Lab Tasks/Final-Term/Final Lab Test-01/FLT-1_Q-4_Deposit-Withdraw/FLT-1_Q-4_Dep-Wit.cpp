#include <iostream>
using namespace std;

void Deposit(int current){
    float amount;
    cout << endl << "Enter amount for Deposit (Tk): ";
    cin >> amount;
    current = current + amount;
    cout << endl << "Your current balance is: " << current << " Tk" << endl;
}

void Withdraw(int current){
    float amount;
    cout << endl << "Enter amount for Withdraw (Tk): ";
    cin >> amount;
    current = current - amount;
    cout << endl << "Your current balance is: " << current << " Tk" << endl;
}

int main(){
    float current;
    int p;
    cout << endl << "Enter current balance (Tk): ";
    cin >> current;
    cout << "For Deposit press 1." << endl;
    cout << "For Withdraw press 2." << endl;
    cin >> p;
    if(p == 1){
        Deposit(current);
    }
    else if(p == 2){
        Withdraw(current);
    }
    else{
        cout << "INVALID OPERATION." << endl;
    }
    return 0;
}