#include <bits/stdc++.h>
using namespace std;

int findz(int a[],int n){
    int maxz=a[0];
    for(int i=0;i<n-1;i++){
        if(maxz<a[i]){
            maxz = a[i];
        }
    }
    return maxz;
}
void chen(int a[], int *n, int x)
{
    int i,j;
    int maxz=findz(a,*n);
    for(i=*n-1;i>=0;i--){
        if(a[i]==maxz){
          (*n)++;
        for(j=*n-1;j>i;j--){
            a[j]=a[j-1];
            }
            a[j+1]=x;
        }
    }
}
int main(){
    freopen("Xbig.inp","r",stdin);
    //int a[]={6,4,8,2,8,4,8};
    //int n = sizeof(a)/sizeof(int);
    int a[100],n, x;
    cin>>n;
    cin>>x;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    chen(a,&n,x);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
