#include <bits/stdc++.h>
#include<algorithm>
using namespace std;


int main(){
    int a[]={1,2,3,5,5,1,1,7,8,6,8,1,1,1,9,5};
    //  a[]={1,1,1,1,1,1,2,3,5,5,5,6,7,8,8,9}
    //b[1]=5, b[2]=1,b[3]=1,b[5]=3,b[6]=1, b[7]=1,b[8]=2,b[9]=1
    b[]={0,5,1,1,0,3,1,1,1,3,1}

    int n = sizeof(a)/sizeof(int);
    int k=0,max=0,so=0;
    sort(a,a+n);
    //for(int i=0;i<n;i++){cout << a[i] <<" ";}
    for(int i=0;i<n+1;i++){
        if(a[i]==a[i+1]){
            k++;
            if(k>max){
                max = k;
                so = a[i];
            }
        }
        else{
            k=1;
        }
    }
    cout << "So lap lai nhieu nhat la "<< so <<" va lap lai " << max;
    return 0;
}
