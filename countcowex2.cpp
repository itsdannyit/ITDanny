//nhap vao mang n phan tu hay xac dinh co bao nhieu phan tu khac nhau va liet ke no
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={0,2,18,6,29,6,1,2,5,1};
    //b[0]=1, b[1]=1,b[2]=1,b[3]=0,b[4]=0,b[5]=1,b[6]=1
    int n = sizeof(a)/sizeof(int);
    int b[100],so=0,max=0;
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++){
        b[a[i]]=1;
         if(max<a[i]){
          max = a[i];
            }
    }
    for(int i=0;i<max+1;i++)
        if(b[i]==1){
            cout << i << " ";
            so++;
        }
    cout << "\nso phan tu khac nhau la: " << so;
    return 0;
}
