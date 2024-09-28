#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={2,4,2,6,4,10,6,-4,-2,2},n= sizeof(a)/sizeof(int);
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]+a[i+2]==a[i+1]){
            cout << a[i] << "+" << a[i+2] << " = " << a[i+1]<<endl;
            k = k + a[i+1];
        }
    }
    cout << "Tong la: " << k;
    return 0;
}
