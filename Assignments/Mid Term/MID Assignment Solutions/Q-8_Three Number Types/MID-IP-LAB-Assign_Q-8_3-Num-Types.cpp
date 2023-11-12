#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int min, max;

    cout << "Enter Range: ";
    cin >> min >> max;
    
    int R = (max - min) + 1;
    int arr[R];

    cout << endl << "Numbers from " << min << " to " << max << " are: ";
    for(int i=0 ; i<R ; i++){
        arr[i] = min;
        cout << arr[i];
        if(R == i+1){
            cout << ".";
        }
        else{
            cout << ", ";
        }
        min++;
    }

    int even[R], ce=0, odd[R], co=0;
    for(int i=0 ; i<R ; i++){
        if(arr[i] == 0){
            continue;
        }
        else{
            if(arr[i] % 2 == 0){
                even[ce] = arr[i];
                ce++;
            }
            else{
                odd[co] = arr[i];
                co++;
            }
        }
    }
    int prime[R], cp=0;
    for(int i=0 ; i<R ; i++){
        if(arr[i] == 0 || arr[i] == 1){
            continue;
        }
        else{
            bool pr = true;
            for(int j=2 ; j<arr[i] ; j++){
                if(arr[i] % j == 0){
                    pr = false;
                    break;
                }
            }
            if(pr == true){
                prime[cp] = arr[i];
                cp++;
            }
        }
    }

    for(int i=0 ; i<3 ; i++){
        if(i==0){
            cout << endl << "Even numbers: ";
            for(int j=0 ; j<ce ; j++){
                cout << even[j];
                if(ce == j+1){
                    cout << ".";
                }
                else{
                    cout << ", ";
                }
            }
        }
        else if(i==1){
            cout << endl << "Odd numbers: ";
            for(int j=0 ; j<co ; j++){
                cout << odd[j];
                if(co == j+1){
                    cout << ".";
                }
                else{
                    cout << ", ";
                }
            }
        }
        else if(i==2){
            cout << endl << "Prime numbers: ";
            for(int j=0 ; j<cp ; j++){
                cout << prime[j];
                if(cp == j+1){
                    cout << ".";
                }
                else{
                    cout << ", ";
                }
            }
        }
    }
    cout << endl;
    getch();
    return 0;
}