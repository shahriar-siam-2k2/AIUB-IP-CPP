#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int N, messi, neymar;
    float avgM, avgN, sumM=0, sumN=0;
    cout << "Enter match numbers: ";
    cin >> N;

    cout << "Enter the number of goals scored by Lionel Messi in last " << N << " matches: ";
    for(int i=0 ; i<N ; i++){
        cin >> messi;
        sumM = sumM + messi;
    }
    cout << "Enter the number of goals scored by Neymar da Silva Santos Junior in last " << N << " matches: ";
    for(int i=0 ; i<N ; i++){
        cin >> neymar;
        sumN = sumN + neymar;
    }
    
    avgM = sumM / N;
    cout << endl << "The average goal scored by Lionel Messi: " << (float)avgM << endl;
    avgN = sumN / N;
    cout << "The average goal scored by Neymar da Silva Santos Junior: " << (float)avgN << endl;

    if(avgM > avgN){
        cout << endl << "Lionel Messi is better player." << endl;
    }
    else if(avgM < avgN){
        cout << endl << "Neymar da Silva Santos Junior is better player." << endl;
    }
    else{
        cout << endl << "Lionel Messi & Neymar da Silva Santos Junior are equal." << endl;
    }
    getch();
    return 0;
}