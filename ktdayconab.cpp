#include <bits/stdc++.h>
using namespace std;

int ktmang(int a[],int m,int b[],int n){
            //a[]={2,4,5,6,3,8},
    //b[]={1,2,5,3,2,4,5,6,3,8,2};
    int kt=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(a[0]==b[i])
        {
            kt = 1;
            k = i+1;
            for(int j=1;j<m;j++,k++){
                if(a[j]!=b[k])
                {
                    kt = 0;
                    break;
                }
            }
            if(kt) break;
        }
    }
    return kt;
}

int main(){
    int a[]={8*8,4,-5,6,-3,8},b[]={1,2,4,5,64,4,-5,6,-3,8,2};
    int m= sizeof(a)/sizeof(a[0]);
    int n= sizeof(b)/sizeof(b[0]);
    if(ktmang(a,m,b,n)==1){
        cout << "a la mang con cua b";
    }
    else{
        cout << "ko phai";
    }

    return 0;
}
