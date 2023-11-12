#include <iostream>
using namespace std;

int main(){
    int i=0;
    float bill_2k2[6], bill_2k3[6], total_2k2=0, total_2k3=0;

    cout << "Enter water bill, electricity bill, gass bill, internet service provider bill, phone bill & garbage disposal bill of 2022 separately: ";
    do{
        cin >> bill_2k2[i];
        total_2k2 += bill_2k2[i];
        i++;
    }
    while(i<6);
    cout << "Total utility bill of 2022: " << total_2k2 << " Taka" << endl << endl;

    cout << "Enter water bill, electricity bill, gass bill, internet service provider bill, phone bill & garbage disposal bill of 2023 separately: ";
    int j=0;
    while(j<6){
        cin >> bill_2k3[j];
        total_2k3 += bill_2k3[j];
        j++;
    }
    cout << "Total utility bill of 2023: " << total_2k3 << " Taka" << endl << endl;

    if(total_2k3 > total_2k2){
        cout << "The cost of living is rising." << endl;
    }
    else{
        cout << "The cost of living is reducing." << endl;
    }
    return 0;
}