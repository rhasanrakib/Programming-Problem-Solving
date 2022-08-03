#include <bits/stdc++.h>
using namespace std;
void prodArray(int a[], int n){

    if(n == 1) {
        cout<<"0";
        return;
    }
    int prod = 1;
    int p[n];
    /* Initialize the product array p[] as 1 */
    for(int j=0; j<n; j++)
        p[j] = 1;
    /* prod variable contains product of
       elements on left side excluding a[i] */
    for(int i=0; i<n; i++) {
        p[i] = prod;
        prod *= a[i];
    }
    /* Initialize prod to 1 for product on right side */
    prod = 1;
    /* prod variable contains product of
       elements on right side excluding a[i] */
    for(int i=n-1; i>=0; i--) {
        cout<<"pod value "<<prod<<endl;
        p[i] *= prod;
        cout<<i<<" arr value == "<< p[i]<<endl;
        cout<<"input array value "<<a[i]<<endl;
        prod *= a[i];
    }
    for(int i=0; i<n; i++)
        cout<<p[i]<<" ";
    return;
}
int main() {
  int a[] = {4, 6, 1, 2};
  int n = sizeof(a)/sizeof(a[0]);
  prodArray(a,n);
  return 0;
}
