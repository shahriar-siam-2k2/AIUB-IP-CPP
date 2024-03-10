#include <iostream>
using namespace std;

int main(){
    float days[7], total=0, avg;
    int c=0;
    cout << "Enter sells- " << endl;
    for(int i=0 ; i<7 ; i++){
        cout << "Day " << i+1 << ": ";
        cin >> days[i];
        total += days[i];
    }
    cout << endl << "Total sells: " << total << endl;
    avg = total / 7;
    cout << "Average sells: " << avg << endl;
    for(int i=0 ; i<7 ; i++){
        if(days[i] < avg){
            c++;
        }
    }
    cout << "Count of above average: " << c << endl;
    if(total >= 10000){
        cout << "Achievement Completed." << endl;
    }
    else{
        cout << "Achievement Not Completed." << endl;
    }
    return 0;
}