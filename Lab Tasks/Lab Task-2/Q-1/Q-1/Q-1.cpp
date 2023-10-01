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