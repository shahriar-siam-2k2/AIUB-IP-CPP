/*
     *
    ***
   *****
  *******
 *********
 *********
 *********
 *********
 *********
*/
#include <iostream>
using namespace std;

int main(){
    for(int i=0 ; i<5 ; i++){
        for(int j=4-i ; j>0 ; j--){
            cout << " ";
        }
        for(int k=0 ; k<(2*i)+1 ; k++){
            cout << "*";
        }
        cout<< endl;
    }

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<9 ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
