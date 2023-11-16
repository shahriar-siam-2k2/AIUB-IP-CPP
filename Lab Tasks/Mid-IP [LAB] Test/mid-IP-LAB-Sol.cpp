#include <iostream>
using namespace std;

int main(){
    string stu[6];
    float cgpa[6];
    for(int i=0 ; i<6 ; i++){
        cout << "Enter student-" << i+1 << " ID: ";
        cin >> stu[i];
        cout << "Enter " << stu[i] << "'s CGPA: ";
        cin >> cgpa[i];
        cout << endl;
    }
    cout << endl;
    for(int i=0 ; i<6 ; i++){
        if(cgpa[i] < 2.50){
            cout << stu[i] << " is a probation student." << endl;
        }
        else if(cgpa[i] > 3.84){
            cout << stu[i] << " is a scholarship student." << endl;
        }
        else if(cgpa[i] > 2.49 && cgpa[i] < 3.85){
            cout << stu[i] << " is a regular student." << endl;
        }
    }
    return 0;
}