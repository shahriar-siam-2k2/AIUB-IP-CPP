#include <iostream>
using namespace std;

int main(){
    int years[3][3], recent=0, old=0;
    cout << endl << "Enter nine years: ";
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> years[i][j];
            if(i==0 && j==0){
                old = years[i][j];
            }
            if(years[i][j] > recent){
                recent = years[i][j];
            }
            else if(years[i][j] < old){
                old = years[i][j];
            }
        }
    }
    cout << endl << "Most Recent year: " << recent;
    cout << endl << "Oldest year: " << old;
    cout << endl << "Leap years: ";
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            if(years[i][j] % 400 == 0 || (years[i][j] % 4 ==0 && years[i][j] % 100 != 0)){
                cout << years[i][j] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}