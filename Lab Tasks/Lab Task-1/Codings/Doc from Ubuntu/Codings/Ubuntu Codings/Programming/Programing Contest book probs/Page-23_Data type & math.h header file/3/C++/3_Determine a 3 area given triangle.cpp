#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c,s,area;
    cout << "Enter 3 aera of triangle seperated by space: ";
    cin >> a >> b >> c;

    s = (a+b+c)/2.0;
    area =  sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "Area: " << area << endl;
    return 0;
}
