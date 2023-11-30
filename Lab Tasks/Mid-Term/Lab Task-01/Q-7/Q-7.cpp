/*Take a character as input through the keyboard. Write a program to find out whether the gender is Male or Female. (Using If-else and switch case)
Inputs: take input ‘M’ or ‘m’ for male and take input ‘F’ or ‘f’ for female. For any other input, the result will show “Undefined”.*/
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