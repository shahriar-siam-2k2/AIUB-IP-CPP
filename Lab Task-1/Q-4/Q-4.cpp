/*Write a C++ program that takes an integer variable, Z and computes the result of Z^5 + Z^7 + Z^9 + Z^4 - Z^3 * Z^2. Do not use any built-in function.*/
#include <iostream>
using namespace std;

int main(){
    int Z;
    cout << "Enter integer number: ";
    cin >> Z;
    int r = (Z*Z*Z*Z*Z) + (Z*Z*Z*Z*Z*Z*Z) + (Z*Z*Z*Z*Z*Z*Z*Z*Z) + (Z*Z*Z*Z) - (Z*Z*Z) * (Z*Z);
    cout << "Result: " << r;
    return 0;
}