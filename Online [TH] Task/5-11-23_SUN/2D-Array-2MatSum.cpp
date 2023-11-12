#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter row and column size: ";
    cin >> row >> col;

    float arr1[row][col], arr2[row][col], sum[row][col];

    cout << endl << "Enter numbers for Matrix-1:" << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cin >> arr1[i][j];
        }
    }

    cout << endl << "Enter numbers for Matrix-2:" << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cin >> arr2[i][j];
        }
    }

    cout << endl << "Your Entered Matrix-1:" << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Your Entered Matrix-2:" << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Addition of Matrix-1 & Matrix-2:" << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}