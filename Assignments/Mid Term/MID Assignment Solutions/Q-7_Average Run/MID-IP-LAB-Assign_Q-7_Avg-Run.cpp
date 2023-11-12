#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int run, sum=0;
    float avg, refAvg;

    cout << "Enter the runs of Virat Kohli in last 4 ODI matches: ";
    for(int i=0 ; i<4 ; i++){
        cin >> run;
        sum = sum + run;
    }
    cout << "Enter the average run of Virat Kohli in 2022: ";
    cin >> refAvg;

    avg = (float)sum / 4;
    cout << endl << "The average run of Virat Kohli in last 4 ODI matches: " << avg << endl;
    if(avg > refAvg){
        cout << "The performance of Virat Kohli is improving." << endl;
    }
    else{
        cout << "The performance of Virat Kohli is deteriorating." << endl;
    }
    getch();
    return 0;
}