// #include <iostream>
// using namespace std;

// bool leapYear(int year) {
//     if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
//         return true;
//     } 
//     else {
//         return false;
//     }
// }

// int main() {
//     int years[4];
//     cout << "Enter four years: ";
//     for(int i=0; i<4; i++) {
//         cin >> years[i];
//     }
//     for(int i=0; i<4; i++) {
//         if(leapYear(years[i])) {
//             cout << years[i] << " is a leap year." << endl;
//         } 
//         else {
//             cout << years[i] << " is not a leap year." << endl;
//         }
//     }

//     return 0;
// }



//faculty code:
#include<iostream>
using namespace std;
void LeapYear(int year[4]){
    for(int i=0; i<4; i++){
        if(year[i]%400==0 || (year[i]%4==0 && year[i]%100!=0)){
            cout<<year[i]<<" is a leap year"<<endl;
        }
        else{
            cout<<year[i]<<" is not a leap year"<<endl;
        }
    }
}
int main(){
int y[4];
cout<<"Enter 4 years:";
for(int i=0; i<4; i++){
    cin>>y[i];
}
LeapYear(y);
 
}