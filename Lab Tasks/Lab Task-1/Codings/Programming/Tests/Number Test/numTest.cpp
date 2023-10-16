#include <iostream>
using namespace std;

int main(){
    char n;
    cin >> n;
    if((int)n % 2 == 0){
        cout << "Even";
    }
    else if((int)n % 2 != 0){
        cout << "Odd";
    }
    else{
        cout << "Error";
    }
    return 0;
}