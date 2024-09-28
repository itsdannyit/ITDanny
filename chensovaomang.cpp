#include <bits/stdc++.h>
using namespace std;

int main(){
    //fopen("chensovaomang.out","w");
    freopen("chensovaomang.inp","r",stdin);
    freopen("chensovaomang.out","w",stdout);
    int a[1000],n,k,x,temp;
    cin>>x;
    cin>>k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=k;i--)
        a[i+1] = a[i];
        a[k] = x;
        ++n;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}

