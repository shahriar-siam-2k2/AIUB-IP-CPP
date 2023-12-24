#include <iostream>
using namespace std;

struct Employee{
    string EmployeeName, EmployeeID;
    float EmployeeSalary;
    int JoiningYear;

    void SetEmployeeInfo(string name, string id, float sal, int year){
        EmployeeName = name;
        EmployeeID = id;
        EmployeeSalary = sal;
        JoiningYear = year;
    }
    float SetBonus(){
        if(EmployeeSalary > 20000 && JoiningYear < 2018){
            cout << endl << "Employee got 20% bonus!" << endl;
            EmployeeSalary = EmployeeSalary + (EmployeeSalary * 0.2);
        }
        else if(EmployeeSalary > 25000 && JoiningYear < 2016){
            cout << endl << "Employee got 30% bonus!" << endl;
            EmployeeSalary = EmployeeSalary + (EmployeeSalary * 0.3);
        }
        else{
            cout << endl << "Employee got 5% bonus!" << endl;
            EmployeeSalary = EmployeeSalary + (EmployeeSalary * 0.05);
        }
        return EmployeeSalary;
    }
    void DisplayInfo(){
        cout << endl << "Employee informations-" << endl;
        cout << "Employee name: " << EmployeeName << endl;
        cout << "Employee ID: " << EmployeeID << endl;
        cout << "Employee salary: " << EmployeeSalary << " Taka" << endl;
        cout << "Employee joining year: " << JoiningYear << endl;
        cout << "Employee salary with bonus: " << SetBonus() << " Taka" << endl;
    }
};

int main(){
    string nm, ID;
    float salary;
    int y;

    cout << endl << "Enter employee name: ";
    cin >> nm;
    cout << "Enter employee ID: ";
    cin >> ID;
    cout << "Enter employee salary: ";
    cin >> salary;
    cout << "Enter employee joining year: ";
    cin >> y;
    
    Employee E;
    E.SetEmployeeInfo(nm, ID, salary, y);
    E.DisplayInfo();
    return 0;
}