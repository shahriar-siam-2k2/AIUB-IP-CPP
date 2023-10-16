/*Write a C++ program which takes a year as input from the user. Afterwards, it checks if the year is a valid year or not (1800-2023). If the year is a valid year, then it will find out whether the year is a leap year or not.*/
#include <iostream>
using namespace std;

int main(){
    int y;
    cout << "Enter a year: ";
    cin >> y;
    if(y>=1800 && y<=2023){
        if((y%400)==0 || ((y%4)==0 && (y%100)!=0)){
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