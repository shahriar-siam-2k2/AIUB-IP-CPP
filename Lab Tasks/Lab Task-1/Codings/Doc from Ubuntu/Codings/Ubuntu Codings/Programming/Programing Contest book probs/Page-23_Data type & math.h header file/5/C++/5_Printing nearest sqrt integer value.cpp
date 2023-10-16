//5_Printing nearest sqrt integer value.cpp
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a;
    int sq;
    cout << "Enter a number: ";
    cin >> a;

    sq = sqrt(a);

    cout << "The nearest integer point of the number " << a << ": " << sq << endl;
    return 0;
}
