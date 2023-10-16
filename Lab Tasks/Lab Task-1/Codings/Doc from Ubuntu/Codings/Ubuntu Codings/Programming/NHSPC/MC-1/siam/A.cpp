#include <iostream>
#include <math.h>
using namespace std;

 int main() {
   int t, n, i;
   cin >> t;
   for(i=1 ; i<=t ; i++) {
      cin >> n;
      int a[n+5], j, mx=0, temp=0, ans;
      float cl=0, cr=0;

      for(j=0 ; j<n ; j++) {
         cin >> a[j];
         temp = max(mx,a[j]);
         mx = temp;
      }

      for(j=n-1 ; j>=0 ; j--) {
         if(a[j] == mx) {
            cl++;
            break;
         }
         else {
            cl++;
         }
      }

      for(j=0 ; j<n ; j++) {
         if(a[j] == mx) {
            cr++;
            break;
         }
         else {
            cr++;
         }
      }

      if(cl < cr) {
         ans = round(cr/cl);
      }
      else {
         ans = round(cl/cr);
      }
      cout << ans << endl;
   }
   return 0;
 }