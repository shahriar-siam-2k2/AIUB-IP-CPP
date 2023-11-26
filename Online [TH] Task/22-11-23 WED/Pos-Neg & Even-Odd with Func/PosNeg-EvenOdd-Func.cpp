#include <iostream>
using namespace std;

void EvenOdd(int n){
    if(n % 2 == 0){
        cout << n << " is even number." << endl;
    }
    else{
        cout << n << " is odd number." << endl;
    }
}

void PosNeg(int n){
    if(n >= 0){
        cout << n << " is positive." << endl;
        EvenOdd(n);
    }
    else{
        cout << n << " is negative." << endl; 
    }
}

int main(){
    int num;
    cout << endl << "Enter a number: ";
    cin >> num;
    PosNeg(num);
    return 0;
}