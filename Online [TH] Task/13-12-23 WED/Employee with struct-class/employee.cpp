#include <iostream>
using namespace std;

class Employee{
    private:
        string EmployeeName;
    protected:
        string EmployeeID;
    private:
        float MonthlySalary;
    public:
        Employee(string name, string id, float monthSal){
            EmployeeName = name;
            EmployeeID = id;
            MonthlySalary = monthSal;
        }
        int ModifiedSalary(int days){
            if(days > 0){
                cout << "You have " << days << " absent days." << endl;
                int per = days * 3;
                MonthlySalary = MonthlySalary - (MonthlySalary * ((float)per/100));
            }
            else{
                cout << "You do not have any absent days." << endl;
                MonthlySalary = MonthlySalary + (MonthlySalary * (2.2/100));
            }
            return MonthlySalary;
        }
        Employee(){

        }
        ~Employee(){
            cout << "Updated Salary: " << MonthlySalary << endl;
        }
        void PrintInfo(){
            cout << endl << "Employee Name: " << EmployeeName << endl;
            cout << "Employee ID: " << EmployeeID << endl;
            cout << "Monthly Salary: " << MonthlySalary << endl;
        }
};

int main(){
    string nm, ID;
    float sal;
    int abs;
    cout << endl << "Enter name: ";
    cin >> nm;
    cout << "Enter ID: ";
    cin >> ID;
    cout << "Enter Monthly Salary: ";
    cin >> sal;
    cout << "Enter Absent Days: ";
    cin >> abs;
    
    Employee E1(nm, ID, sal);
    E1.PrintInfo();
    E1.ModifiedSalary(abs);
    return 0;
}