#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[1000],dem=0;
    cout << "Num: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
            int kt=1; //gia su khac nhau
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                kt=0;//truong hop bang nhau
                break;
            }
        }
            if (kt==1)
                dem++;

    }
    cout<<"So gia tri khac nhau la:"<<dem;
    return 0;
}
