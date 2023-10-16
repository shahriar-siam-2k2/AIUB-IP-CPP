//4. Determining parameter of a circle.cpp
#include<iostream>
using namespace std;

int main()
{
    double r,p;
    const double pi = 22.0/7.0;
    cout << "Enter the radius of circle: ";
    cin >> r;

    p = 2*pi*r;

    cout << "Parameter: " << p << endl;
    return 0;
}
