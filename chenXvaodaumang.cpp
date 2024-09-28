#include <bits/stdc++.h>
using namespace std;
void chen(int a[], int n,int x)
{
    for(int i=n-1;i>=0;i--){
        a[i+1]=a[i];
        }
    a[0]=x;
    (n)++;
}
int main(){
    int a[]={1,3,-9,0,4,6,7,9};
    int n= sizeof(a)/sizeof(int) ,x;

    cout<<"Input x: ";      cin>>x;
    chen(a,n,x);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}
