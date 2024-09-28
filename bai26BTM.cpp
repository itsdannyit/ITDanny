#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    freopen("bai26BTM.inp","r",stdin);
    //int a[]={6,4,8,2,8,4,8};
    //int n = sizeof(a)/sizeof(int);
    ll a[1000],n, x,j;
    cin>>n;
    cin>>x;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]%2==0){
            n++;
            for(j=n-1;j>i;j--){
            a[j]=a[j-1];
            }
            a[j+1]=x;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
