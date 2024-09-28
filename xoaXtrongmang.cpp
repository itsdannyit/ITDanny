#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,3,2,5,4,1,6,1,7,4,9,1,1};
    int n=sizeof(a)/sizeof(int);
    int x=1,k=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]==x){
            for(int j=i;j<n;j++)
            {
                a[j] = a[j+1];
            }
            n--;
            k++;
        }
    }
    if(k==0){
        cout << "-1";
    }
    else{
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    }
    return 0;
}
