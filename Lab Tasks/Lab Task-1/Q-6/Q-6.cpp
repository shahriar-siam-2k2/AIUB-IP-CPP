/*Implement a C++ program to check whether a number is divisible by 2, 5 and 11 or not. Show the use of ‘OR Operator’ and ‘AND Operator’ in the program if necessary.*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if((n % 2)==0 && (n % 5)==0 && (n % 11)==0){
        cout << "Divisible" << endl;
    }
    else{
        cout << "Not divisible" << endl;
    }
    return 0;
}