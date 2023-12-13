#include <iostream>
using namespace std;

struct Employee{
    string EmployeeName, EmployeeID;
    int Designation;
    float MonthlySalary, YearOfService;

    void SetEmployeeInfo(){
        cout << "Enter Employee Name: ";
        getline(cin, EmployeeName);
        cout << "Enter Employee ID: ";
        getline(cin, EmployeeID);
        cout << "Enter Monthly Salary: ";
        cin >> MonthlySalary;
        cout << "Enter Year of Service: ";
        cin >> YearOfService;

        cout << "Choose your designation: " << endl;
        cout << "For Collection agent, press-1" << endl;
        cout << "For Account executive, press-2" << endl;
        cout << "For Account manager, press-3" << endl;
        cin >> Designation;
    }
    void GetEmployeeInfo(){
        cout << endl << "Information of the employee-" << endl;
        cout << "Employee Name: " << EmployeeName << endl;
        cout << "Employee ID: " << EmployeeID << endl;
        cout << "Employee Monthly Salary: " << MonthlySalary << endl;
        cout << "Employee Year of Service: " << YearOfService << endl;
        cout << "Employee Annual Salary: " << MonthlySalary * 12 << endl;
        cout << "Employee Designation: ";
        if(Designation == 1){
            cout << "Collection agent" << endl;
        }
        else if(Designation == 2){
            cout << "Account executive" << endl;
        }
        else if(Designation == 3){
            cout << "Account manager" << endl;
        }
        else{
            cout << endl << "INVALID INPUT" << endl;
        }
    }
    float EmployeeBonus(){
        float annSal = (MonthlySalary * 12);
        if(Designation == 1 && YearOfService > 4){
            annSal = annSal + (annSal*0.10);
        }
        else if(Designation == 3 && YearOfService > 2.5){
            annSal = annSal + (annSal*0.2734);
        }
        else if(Designation == 2 && YearOfService > 3){
            annSal = annSal + (annSal*0.25);
        }
        return annSal;
    }
};

int main(){
    Employee e1;
    e1.SetEmployeeInfo();
    e1.GetEmployeeInfo();
    cout << endl << "Bonus annual salary of employee: " << e1.EmployeeBonus() << endl;
    return 0;
}