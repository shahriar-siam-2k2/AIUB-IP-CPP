#include <iostream>
using namespace std;

void start(int n) {
    cout << endl << "----Fibonacci Sequence Creator----" << endl;
    cout << endl << "Enter your desired range for creating a fibonacci sequence, where the range is a real number (R\"): ";
    cin >> n;

    for( ; ; ) {
        if(n<0) {
        cout << endl << "ERROR";
        cout << endl << "Only real number (R\") is allowed!" << endl;
        cout << endl << "Re-executing this program..." << endl;
        start(n);
        }
        else {
            break;
        }
    }
}

int main() {
    int n;

    start(n);

    cout << n <<endl;
    return 0;
}