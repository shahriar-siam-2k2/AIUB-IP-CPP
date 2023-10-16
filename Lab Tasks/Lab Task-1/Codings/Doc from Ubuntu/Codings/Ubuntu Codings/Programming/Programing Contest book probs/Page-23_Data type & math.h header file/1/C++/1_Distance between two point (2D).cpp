//1_Distance between two point (2D)
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,d;
    cout << "Enter x1 & x2: ";
    cin >> x1 >> x2;
    cout << "Enter y1 & y2: ";
    cin >> y1 >> y2;

    d = sqrt(pow((x1-x2),2) + pow((y1-y2),2));

    cout << "Distance: " << d <<endl;
    return 0;
}
