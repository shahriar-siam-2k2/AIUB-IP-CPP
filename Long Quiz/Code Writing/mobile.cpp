#include <iostream>
using namespace std;

class Mobile{
    protected:
        double MobileBalance;
        bool lockStatus;
    public:
        string MobileOwner, MobileNumber;
        Mobile(string nm, string num, double balance, bool lock){
            MobileOwner = nm;
            MobileNumber = num;
            MobileBalance = balance;
            lockStatus = lock;
        }
        double Recharge(double amount){
            if(lockStatus == false){
                MobileBalance += amount;
            }
            else{
                cout << "Your phone is locked!" << endl;
            }
        }
        double CallOther(int timeDuration){
            if(lockStatus == false){
                double cost = (double)timeDuration * 0.5;
                MobileBalance -= cost;
            }
            else{
                cout << "Your phone is locked!" << endl;
            }
        }
        ~Mobile(){
            cout << endl << "Mobile Owner's Name: " << MobileOwner << endl;
            cout << "Phone Number: " << MobileNumber << endl;
            cout << "Moblie Balance: " << MobileBalance << endl;
        }
};

int main(){
    string name, mobNum;
    double blnc, amount;
    int duration;
    bool locker;

    cout << endl << "Enter Mobile owner's Name: ";
    cin >> name;
    cout << "Enter Mobile Number: ";
    cin >> mobNum;
    cout << "Enter Mobile Balance: ";
    cin >> blnc;
    cout << "Enter Lock Status(0=Unclock, 1=Lock): ";
    cin >> locker;
    
    Mobile 
    user(name, mobNum, blnc, locker);
    cout << "Enter recharge amount: ";
    cin >> amount;
    user.Recharge(amount);
    cout << "Enter calling duration: ";
    cin >> duration;
    user.CallOther(duration);

    return 0;
}