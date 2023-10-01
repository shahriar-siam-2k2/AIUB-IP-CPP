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