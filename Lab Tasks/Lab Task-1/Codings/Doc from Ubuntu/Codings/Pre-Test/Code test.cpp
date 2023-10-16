#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, sum=0, i=5;
    cin >> n;
    for(i ; i<=n ; ) {
        sum = sum + pow(i,2);
        i = i + 2;
    }
    cout << sum << endl;
    return 0;
}