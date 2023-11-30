//Write a C++ program that takes 5 integer values as input from the user using forloop and prints the average of five numbers.
#include <iostream>
using namespace std;

int main(){
    int num, sum=0;
    float avg;
    cout << "Enter 5 integer numbers: ";
    for(int i=0 ; i<5 ; i++){
        cin >> num;
        sum+=num;
    }
    avg = sum / 5;
    cout << "Average: " << avg;
    return 0;
}
