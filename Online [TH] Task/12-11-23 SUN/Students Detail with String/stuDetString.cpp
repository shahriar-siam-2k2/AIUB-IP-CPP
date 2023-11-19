#include <iostream>
using namespace std;

int main(){
    string info[4];
    cout << "Enter your Name, ID, Department, University: ";
    for(int i=0 ; i<4 ; i++){
        getline(cin, info[i]);
    }
    cout << endl << "Your student Identity-" << endl;
    cout << "Name: " << info[0] << endl;
    cout << "ID: " << info[1] << endl;
    cout << "Department: " << info[2] << endl;
    cout << "University: " << info[3] << endl;
    return 0;
}