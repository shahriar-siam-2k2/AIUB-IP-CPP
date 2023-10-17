/*5
5 10
5 10
5 10 15
5 10 15 20
5 10 15 20 25
5 10 15 20 25 30
*/
#include <iostream>
using namespace std;

int main(){
    for(int i=0 ; i<7 ; i++){
        for(int j=1; j<i+1 ; j++){
            cout << 5*j << " ";
        }
        cout << endl;
    }
    return 0;
}
