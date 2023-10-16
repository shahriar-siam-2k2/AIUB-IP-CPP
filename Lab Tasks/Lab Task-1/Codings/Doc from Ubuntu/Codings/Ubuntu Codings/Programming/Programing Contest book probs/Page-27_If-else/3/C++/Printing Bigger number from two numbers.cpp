//Printing Bigger number from two numbers.cpp
#include<iostream>
using namespace std;

int main()
{
    double a,b;

    cout << "Enter two numbers separating by space: ";
    cin >> a >> b;

    if(a > b)
    {
        cout << endl << a << " is biggest number." << endl;
    }
    else
    {
        cout << endl << b << " is biggest number." << endl;
    }
    return 0;
}

