#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter your gender ('M' or 'm' for male and 'F' or 'f' for female): ";
    cin >> c;
    if(c == 'M' || c == 'm'){
        cout << "Male" << endl;
    }
    else if(c == 'F' || c == 'f'){
        cout << "Female" << endl;
    }
    else{
        cout << "Undefined" << endl;
    }
    return 0;
}