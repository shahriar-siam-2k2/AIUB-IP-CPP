//6_priinting coordinate area (Triangle).cpp
#include<iostream>
using namespace std;

int main()
{
    double x1,x2,x3,y1,y2,y3,A;

    cout << "Enter first coordinate(x,y) separating space: ";
    cin >> x1 >> y1;
    cout << "Enter second coordinate(x,y) separating space: ";
    cin >> x2 >> y2;
    cout << "Enter third coordinate(x,y) separating space: ";
    cin >> x3 >> y3;

    A = 0.5*(x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3);

    cout << endl << "Area of triangle: " << A << endl;
    return 0;
}
