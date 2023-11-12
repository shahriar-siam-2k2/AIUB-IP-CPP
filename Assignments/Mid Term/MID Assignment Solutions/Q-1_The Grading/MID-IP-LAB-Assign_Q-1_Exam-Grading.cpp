#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int i=0;
    float n;
    do{
        if(i==0){
            cout << "Enter Physics number: ";
            cin >> n;
            cout << "The obtained grade of Physics is ";
        }
        else if(i==1){
            cout << "Enter Chemistry number: ";
            cin >> n;
            cout << "The obtained grade of Chemistry is ";
        }
        else if(i==2){
            cout << "Enter Math number: ";
            cin >> n;
            cout << "The obtained grade of Math is ";
        }
        
        if(n>=80 && n<=90){
            cout << "A+" << endl << endl;
        }
        else if(n>=70 && n<80){
            cout << "A" << endl << endl;
        }
        else if(n>=60 && n<70){
            cout << "B+" << endl << endl;
        }
        else if(n>=50 && n<60){
            cout << "B" << endl << endl;
        }
        else if(n<50){
            cout << "F" << endl << endl;
        }
        i++;
    }
    while(i<3);
    getch();
    return 0;
}