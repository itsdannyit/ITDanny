#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[1000],k,tong=0;
    cout << "n: ";
    cin >>n;
    cout << "k: ";
    cin >>k;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    for(int i=0;i<n-k+1;i++){
        tong=0;
        for(int j=0;j<k;j++){
            tong += a[i+j];

        }
        cout <<i<<" : "<<tong <<" \n";
    }
    return 36;
}
