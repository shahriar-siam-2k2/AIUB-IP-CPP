//Quadrant determining.cpp
#include<iostream>
using namespace std;

int main()
{
    double x,y;

    cout << "Enter the Coordinate separating by space: ";
    cin >> x >> y;

    if(x>0 && y>0)
    {
        cout << endl << "(" << x << "," << y << ") " << "is on the First Quadrant." << endl;
    }
    else if(x<0 && y>0)
    {
        cout << endl << "(" << x << "," << y << ") " << "is on the Second Quadrant." << endl;
    }
    else if(x<0 && y<0)
    {
        cout << endl << "(" << x << "," << y << ") " << "is on the Third Quadrant." << endl;
    }
    else if(x>0 && y<0)
    {
        cout << endl << "(" << x << "," << y << ") " << "is on the Fourth Quadrant." << endl;
    }
    return 0;
}

