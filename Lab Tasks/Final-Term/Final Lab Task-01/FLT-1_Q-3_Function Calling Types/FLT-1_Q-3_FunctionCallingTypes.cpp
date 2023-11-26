#include <iostream>
using namespace std;

void callByVal(int a){
    a = a + 10;
    cout << "Inside call by value function, value is: " << a << endl;
}

void callByRef(int &a){
    a = a + 10;
    cout << "Inside call by reference function, value is: " << a << endl;
}

int main(){
    int n = 10;
    cout << endl << "Before function call, value is: " << n << endl;
    callByVal(n);
    cout << "Outside call by value function, value is: " << n << endl;
    callByRef(n);
    cout << "Outside call by reference function, value is: " << n << endl;
    return 0;
}