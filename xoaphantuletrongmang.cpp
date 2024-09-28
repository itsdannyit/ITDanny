#include <bits/stdc++.h>
using namespace std;

int main(){
            //6 2 5 7 5
    int a[]={6,4,2,9,5,3,7,1,5,8},dem=0;
    int n = sizeof(a)/sizeof(a[0]);
    int l=n;
    for(int i=l;i>=0;i--){
        if(i%2!=0){
         for(int j=i;j<l;j++){
         a[j] =a[j+1];
         }
         l--;
        }
    }
    for(int i=0;i<l;i++){
        cout << a[i] << " ";
    }
    return 0;
}

