/*Write a C++ program which will take a number as input then it will check whether the number is 
an integer number or a float number.*/
#include <iostream>
using namespace std;

int main(){
    float n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = (int)n;

    if(n == temp){
        cout << n << " is a integer number";
    }
    else{
        cout << n << " is a float number";
    }
    return 0;
}
