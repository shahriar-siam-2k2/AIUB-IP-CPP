#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter row and column size: ";
    cin >> row >> col;

    char arr[row][col];
    cout << endl << "Enter Letters:" << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cin >> arr[i][j];
        }
    }

    cout << endl << "Your Entered letters (Matrix format):" << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            if(arr[i][j] == 'A' || arr[i][j] == 'a' || arr[i][j] == 'E' || arr[i][j] == 'e' || arr[i][j] == 'I' || arr[i][j] == 'i' || arr[i][j] == 'O' || arr[i][j] == 'o' || arr[i][j] == 'U' || arr[i][j] == 'u'){
                cout << arr[i][j] << " is vowel." << endl;
            }
            else{
                cout << arr[i][j] << " is consonant." << endl;
            }
        }
    }
    return 0;
}
