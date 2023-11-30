/*
Write a C++ program that takes a number from the user and prints first inputted number of Fibonacci numbers from Fibonacci series.

    Sample: Input: 9
            Output: First 9 Fibonacci numbers are: 0 1 1 2 3 5 8 13 21
*/
#include <iostream>
using namespace std;

int main(){
    int n, f1=0, f2=1, f;
    cout << "Enter Fibonacci range: ";
    cin >> n;
    if(n==0){
        cout << "NO Fibonacci Numbers.";
    }
    else{
        cout << "First " << n << " Fibonacci numbers are: ";
        for(int i=0 ; i<n ; i++){
            if(i==0){
                cout << f1 << " ";
            }
            else{
                f = f1 + f2;
                f2 = f1;
                f1 = f;
                cout << f << " ";
            }
        }
    }
    return 0;
}
