#include<iostream>
using namespace std;

void Sum(int a, int b){
    int add = a + b;
    cout << "Addition: " << add << endl;
}
void Sub(int a, int b){
    int sub = a - b;
    cout << "Subtraction: " << sub << endl;
}
void Mul(int a, int b){
    int mul = a * b;
    cout << "Multiplication: " << mul << endl;
}
void Div(int a, int b){
    int div = a / b;
    cout << "Division: " << div << endl;
}
void Rem(int a, int b){
    int rem = a % b;
    cout << "Remainder: " << rem << endl;
}

int main(){
    char c;
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Which operation do you want?: ";
    cin >> c;
    switch(c){
        case '+':
            Sum(x, y);
            break;
        case '-':
            Sub(x, y);
            break;
        case '*':
            Mul(x, y);
            break;
        case '/':
            Div(x, y);
            break;
        case '%':
            Rem(x, y);
            break;
        default:
            cout << endl << "Running all operations: " << endl;
            Sum(x, y);
            Sub(x, y);
            Mul(x, y);
            Div(x, y);
            Rem(x, y);
            break;
    }
    return 0;
}
