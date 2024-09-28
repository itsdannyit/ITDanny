#include <bits/stdc++.h>
using namespace std;

int main(){
    //fopen("tinhtongphantucuctieu.inp","w");
    freopen("tinhtongphantucuctieu.inp","r",stdin);
    freopen("tinhtongphantucuctieu.out","w",stdout);
    int a[1000],n,sum=0,kt=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n-3;i++){
        if((a[i+1] < a[i+2]) && (a[i+1] < a[i])){
            cout << a[i+1] << " ";
            sum = sum + a[i+1];
            kt=1;
        }
    }
    if(kt==-1){
        cout << "-1";
    }
    if(sum!=0){
        cout << "\nTong la: " << sum;
    }
    return 0;
}

