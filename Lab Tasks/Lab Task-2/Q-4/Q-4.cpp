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