#include <iostream>
using namespace std;

int main(){
    int year;
    for( ; ; ){
        cout << endl << "Enter a year: ";
        cin >> year;

        if((year % 400)==0){
            cout << year << " is a leap year." << endl;
        }
        else if((year % 4)==0 && (year % 100)!=0){
            cout << year << " is a leap year." << endl;
        }
        else{
            cout << year << " is not a leap year." << endl;
        }

        char e;
        cout << endl << "Want to run again? ('Y' for YES, 'N' for NO): ";
        cin >> e;
        if(e=='Y' || e=='y'){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}