#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("bai27BTM.inp","r",stdin);
    int a[1000],b[100],c[100],n,b1=0,c1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            b[b1]=a[i];
            b1++;
        }
        else{
            c[c1]=a[i];
            c1++;
        }
    }
    cout<<"EVEN Number: ";
    if(b1==0){
            cout << "No numbers found.";
        }
    else{
    for(int i=0;i<b1;i++){
        cout<<b[i]<<" ";
        }
    }
    cout<<"\nODD Number: ";
    if(c1==0){
            cout << "No numbers found.";
        }
    else{
    for(int i=0;i<c1;i++){
        cout<<c[i]<<" ";
        }
    }
    return 0;
}
