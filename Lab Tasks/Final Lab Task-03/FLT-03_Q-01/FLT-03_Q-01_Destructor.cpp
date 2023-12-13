#include <iostream>
using namespace std;

class A{
    int a, b;
public:
    A(int x, int y){
        a=x, b=y;
        cout << "Constructor called" << endl;
        cout << "Value of a: " << a++ << endl;
        b++;
    }
    void Method_A(){
        a=b--;
        --b;
    }
    ~A(){
        cout << "Destructor called" << endl;
        cout << "Value of a: " << a++ << endl;
        cout << "Value of b: " << b++ << endl;
    }
};

int main (){
    cout << endl;
    A a1(5, 10);
    A a2(2, 4);
    a2.Method_A();
    return 0;
}
