#include <iostream>
using namespace std;

void posNeg(int n){
    if(n >= 0){
        cout << "Number is positive." << endl;
    }
    else{
        cout << "Number is negative." << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    posNeg(n);
    return 0;
}
