#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, e, sum, avg;
    cout << "Enter 5 float numbers: ";
    cin >> a >> b >> c >> d >> e;
    sum = a + b + c + d + e;
    avg = sum / 5;
    cout << "Summation: " << sum << endl;
    cout << "Average: " << avg << endl;
    return 0;
}
