#include <iostream>
using namespace std;

bool Prime(int a){
    bool flag = true;
    if(a == 0 || a == 1){
        flag = false;
    }
    else{
        for(int i=2 ; i<a ; i++){
            if(a%i == 0){
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main(){
    int n;
    cout << "Enter an integer number: ";
    cin >> n;
    if(Prime(n) == true){
        cout << n << " is a prime number." << endl;
    }
    else{
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}