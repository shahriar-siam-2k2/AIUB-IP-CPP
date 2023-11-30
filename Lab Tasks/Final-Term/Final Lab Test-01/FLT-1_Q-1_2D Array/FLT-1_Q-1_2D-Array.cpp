#include <iostream>
using namespace std;

int main(){
    int arr[4][5];
    cout << endl << "Enter integer numbers: " << endl;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<4 ; i++){
        if(i==0){
            int max = arr[i][0];
            for(int j=1 ; j<5 ; j++){
                if(arr[i][j] > max){
                    max = arr[i][j];
                }
            }
            cout << endl << "Maximum number from row-1: " << max;
        }
        else if(i==1){
            int min = arr[i][0];
            for(int j=1 ; j<5 ; j++){
                if(arr[i][j] < min){
                    min = arr[i][j];
                }
            }
            cout << endl << "Minimum number from row-2: " << min;
        }
        else if(i==2){
            cout << endl << "Even numbers from row-3: ";
            for(int j=0 ; j<5 ; j++){
                if(arr[i][j] % 2 == 0){
                    cout << arr[i][j] << " ";
                }
            }
        }
        else if(i==3){
            cout << endl << "Prime numbers from row-4: ";
            for(int j=0 ; j<5 ; j++){
                bool pr = true;
                if(arr[i][j] == 0 || arr[i][j] == 1){
                    pr = false;
                }
                else{
                    for(int k=2 ; k < arr[i][j] ; k++){
                        if(arr[i][j] % k == 0){
                            pr = false;
                            break;
                        }
                    }
                }
                
                if(pr == true){
                    cout << arr[i][j] << " ";
                }
            }
        }
    }
    cout << endl;
    return 0;
}