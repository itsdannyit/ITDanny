#include <bits/stdc++.h>
using namespace std;

bool kt(int a[],int n){
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int a[1000],n;
    freopen("sotangdangiamdan.inp","r",stdin);
    freopen("sotangdangiamdan.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(kt(a,n)==true){
        cout<<"Day la mang tang dan";
    }
    if(kt(a,n)==false){
        cout<<"Day la mang khong tang dan";
    }
    return 0;
}
