/*Write a C++ program for a photocopy shop. In that shop, the charge for one page photocopy 
is 2.35 TAKA. Now ask the customer how many pages the user wants to photocopy, then print the total amount. Afterwards, if the customer’s total cost is greater than 100 taka then the customer will get 4% discount on his/her total cost.*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter page numbers: ";
    cin >> n;
    float tk = 2.35 * n;
    cout << endl << "Your total amount: " << tk << endl;
    if(tk > 100){
        tk = tk - (tk*0.04);
        cout << "You will get 4% discount." << endl;
        cout << "Your total amount will be: " << tk;
    }
    return 0;
}