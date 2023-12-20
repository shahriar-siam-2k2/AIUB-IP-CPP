#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    int type, q;
    float total, USD;

    cout << "Which type of gold do you want to purchase?" << endl;
    cout << "Press 1 for 22-Karat Gold" << endl;
    cout << "Press 2 for 24-Karat Gold" << endl;
    cin >> type;

    cout << "Enter the quantity(gram) of gold that you want to purchase: ";
    cin >> q;

    switch(type){
        case 1:
            total = q * 6529.4;
            cout << "Price of 1 gram of 22-Karat gold is 6,529.4 Taka" << endl;
            cout << "Your total cost is: " << total << " BDT" << endl;
            break;
        case 2:
            total = q * 7126.6;
            cout << "Price of 1 gram of 24-Karat gold is 7,126.6 Taka" << endl;
            cout << "Your total cost is: " << total << " BDT" << endl;
            break;
    }

    char C;
    cout << "Do you want to convert the money is US Dollar? press Y for YES and N for NO" << endl;
    cin >> C;

    switch(C){
        case 'Y':
            USD = total / 110.24;
            cout << "Total cost: $" << USD << endl;
            break;
        case 'N':
            cout << "Thank you" << endl;
            break;
    }
    getch();
    return 0;
}