#include <bits/stdc++.h>
using namespace std;

int cal(int n){
    if (n<2)
    {
       return 0;
    }
    else
    {
        for(int i=2;i<=sqrt(n);i++)
            if( n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int a[1000],n,dem=0;
    cout<<"n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "a[" <<i<<"] = ";
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        if(cal(a[i])==1){
            dem++;
        }
    }
    if(dem == 0){
        cout << "Khong co so nguyen to nao trong mang.";
    }
    else{
    cout<<"Cac so nguyen to la: ";
    for(int i=0;i<n;i++){
        if(cal(a[i])==1){
            cout << a[i] << " ";
        }
    }
    cout<<"\nSo luong so nguyen to la: " << dem;
    }
    return 0;
}
