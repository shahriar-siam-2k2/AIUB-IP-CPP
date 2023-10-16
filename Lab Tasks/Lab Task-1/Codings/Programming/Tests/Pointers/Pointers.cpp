#include <iostream>
#include <math.h>
using namespace std;

// int main() {

//     int a;

//     cout << endl;
//     cin >> a;

//     int *ptr = &a;

//     cout << endl << *ptr << endl;

//     return 0;
// }



// int main() {
//     for(int i=2 ; i<=5 ; i++) {
//         cout << i << endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
  int n,c=0;
  cin >> n;
  int cars[10];
  for (int i = n; i < 10; i++) {
    cars[i]=i;
    c++;
  }
  for (int i = n; i < c; i++) {
    cout << endl << cars[i];
  }
  return 0;
}
