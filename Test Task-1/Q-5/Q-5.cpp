#include <iostream>
using namespace std;

int main(){
    int n;
    float total;
    cout << "Enter the page amount you want for the photocopy: ";
    cin >> n;
    total = n * 2.35;
    cout << "Your total amount: " << total << " Taka" << endl;
    return 0;
}
