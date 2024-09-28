#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("xoaphantutrongmang.inp","r",stdin);
    freopen("xoaphantutrongmang.out","w",stdout);
    int a[1000],n,k;
    cin>>k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=k;i<n;i++){
         a[i] =a[i+1];
        }
    n--;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << "\nSo phan tu con lai la: " << n;
    return 0;
}
