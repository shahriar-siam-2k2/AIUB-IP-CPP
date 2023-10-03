#include <iostream>
using namespace std;

int main(){
    int y;
    cout << "Enter a year: ";
    cin >> y;
    if(y>=1800 && y<=2023){
        if((y%400)==0){
            cout << y << " is leap year." << endl;
        }
        else if((y%4)==0 && (y%100)!=0){
            cout << y << " is leap year." << endl;
        }
        else{
            cout << y << " is not a leap year." << endl;
        }
    }
    else{
        cout << y << " is not valid year." << endl;
    }
    return 0;
}