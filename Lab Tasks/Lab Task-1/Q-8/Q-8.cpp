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