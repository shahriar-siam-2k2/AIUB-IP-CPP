//Printing 3 numbers with Ascending order.cpp
#include<iostream>
using namespace std;

int main()
{
    double a,b,c;

    cout << "Enter three numbers separated by space: ";
    cin >> a >> b >> c;

    if(a < b && a < c)
    {
        if(b < c)
        {
            cout << endl << "The Ascending order is: " << a << ", " << b << ", " << c << endl;
        }
        else
        {
            cout << endl << "The Ascending order is: " << a << ", " << c << ", " << b << endl;
        }
    }
    else if(b < a && b < c)
    {
        if(a < c)
        {
            cout << endl << "The Ascending order is: " << b << ", " << a << ", " << c << endl;
        }
        else
        {
            cout << endl << "The Ascending order is: " << b << ", " << c << ", " << a << endl;
        }
    }
    else if(c < a && c < b)
    {
        if(a < b)
        {
            cout << endl << "The Ascending order is: " << c << ", " << a << ", " << b << endl;
        }
        else
        {
            cout << endl << "The Ascending order is: " << c << ", " << b << ", " << a << endl;
        }
    }
    return 0;
}
