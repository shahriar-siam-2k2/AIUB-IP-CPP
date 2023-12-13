#include <iostream>
using namespace std;

class SalaryAccount{
    protected: 
        double SalaryBalance = 205000;
    public:
        string Name, Occupation, SalaryAccNum = "101.23q.4b", PhoneNumber;

        SalaryAccount(string nm, string oc, string phn){
            Name = nm;
            Occupation = oc;
            PhoneNumber = phn;
        }
        void PrintSalaryInfo(){
            cout << endl << "Acount holder's informations-" << endl;
            cout << "Account Name: " << Name << endl;
            cout << "Account Number: " << SalaryAccNum << endl;
            cout << "Account balance: " << SalaryBalance << endl;
            cout << "Account Occupation: " << Occupation << endl;
            cout << "Account Phone number: " << PhoneNumber << endl;
        }
        double TaxReturnSalary(){
            double per = (3*SalaryBalance)/20000;
            cout << endl << "Tax percentage: " << per << endl;
            SalaryBalance = SalaryBalance - (SalaryBalance*(per/100));
            return SalaryBalance;
        }
        ~SalaryAccount(){
            cout << "Updated balance: " << SalaryBalance << endl;
        }
};

int main(){
    SalaryAccount S1("SIAM", "Manager", "01629054073");
    S1.PrintSalaryInfo();
    S1.TaxReturnSalary();
    return 0;
}