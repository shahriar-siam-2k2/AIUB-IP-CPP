//2. Determining 3 angles of triangle.cpp
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c,A,B,C;
    const double pi = 22.0/7;

    cout << "Enter 3 sides of triangle separating by space: ";
    cin >> a >> b >> c;

    A = acos((pow(b,2) + pow(c,2) - pow(a,2)) / (2.0*b*c));
    B = acos((pow(a,2) + pow(b,2) - pow(c,2)) / (2.0*a*b));
    C = acos((pow(c,2) + pow(a,2) - pow(b,2)) / (2.0*a*c));

    A = (180.0*A) / pi;
    B = (180.0*B) / pi;
    C = (180.0*C) / pi;

    cout << endl << "Triangle A: " << A;
    cout << endl << "Triangle B: " << B;
    cout << endl << "Triangle C: " << C << endl;
    return 0;
}
