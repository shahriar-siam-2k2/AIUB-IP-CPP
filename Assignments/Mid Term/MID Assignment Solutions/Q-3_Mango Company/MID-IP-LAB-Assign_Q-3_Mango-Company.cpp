#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    float monSal, mango, annSal, total;
    cout << "Enter your monthly salary (BDT): ";
    cin >> monSal;
    cout << "Enter the quantity of mangoes sold in 2022 (Kg): ";
    cin >> mango;

    annSal = 12 * monSal;
    cout << endl << "Your annual salary is: " << annSal << " Taka." << endl;

    total = mango * 350;
    cout << "Your total cost of mangoes sold in 2022 is: " << total << " Taka." << endl;

    if(total > 15000){
        cout << endl << "CONGRATULATIONS!" << endl;
        cout << "You received a 24% annual bonus!" << endl;
        cout << "Your annual salary with bonus is: " << annSal + (annSal * 0.24) << " Taka." << endl;
    }
    else{
        float reqCost = 15000.01 - total;
        float reqMango = reqCost / 350;
        cout << endl << "SORRY" << endl;
        cout << "You don't received annual bonus." << endl;
        cout << "Your required cost and quantity for getting 24% annual bonus are-" << endl;
        cout << "Required cost: " << reqCost << " Taka" << endl;
        cout << "Required Quantity: " << reqMango << " Kg" << endl;
    }
    getch();
    return 0;
}