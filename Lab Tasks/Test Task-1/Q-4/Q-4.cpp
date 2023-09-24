#include <iostream>
using namespace std;

int main(){
    float b, h, a;
    cout << "Base: ";
    cin >> b;
    cout << "Height: ";
    cin >> h;
    a = 0.5 * b * h;
    cout << "Area of triangle: " << a << endl;
    return 0;
}
