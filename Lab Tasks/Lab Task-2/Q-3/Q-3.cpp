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
