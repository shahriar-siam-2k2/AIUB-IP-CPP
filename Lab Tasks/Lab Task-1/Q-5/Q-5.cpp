#include <iostream>
using namespace std;

int main(){
    float b, h, a;
    cout << "Enter base: ";
    cin >> b;
    cout << "Enter height: ";
    cin >> h;
    
    a = 0.5 * b * h;

    if(((int)a % 2)==0){
        cout << endl << "The area of triangle is " << a << " and it is an even number." << endl;
    }
    else{
        cout << endl << "The area of triangle is " << a << " and it is an odd number." << endl;
    }
    return 0;
}