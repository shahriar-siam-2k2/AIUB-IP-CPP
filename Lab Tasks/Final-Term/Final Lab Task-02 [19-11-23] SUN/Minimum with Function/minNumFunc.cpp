#include <iostream>
using namespace std;

float minFinder(float x, float y, float z){
    if(x < y){
        if(x < z){
            return x;
        }
        else{
            return z;
        }
    }
    else{
        if(y < z){
            return y;
        }
        else{
            return z;
        }
    }
}

int main(){
    float a, b, c, min;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    min = minFinder(a, b, c);
    cout << "Minimum number among three numbers is: " << min << endl;
    return 0;
}