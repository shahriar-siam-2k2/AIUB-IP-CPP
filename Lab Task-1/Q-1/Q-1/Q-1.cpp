/*Write a C++ program to take five float variables as input from the user. Find out the summation 
and average of five numbers and check whether the average is an even number or an odd number.*/
#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, e;
    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;
    float sum = a+b+c+d+e;
    float avg = sum/5;
    if(((int)avg % 2==0)){
        cout << "The average " << avg << " is an even number.";
    }
    else{
        cout << "The average " << avg << " is an odd number.";
    }
    return 0;
}