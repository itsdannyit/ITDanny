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
    cout << "So luong gia tri khac nhau trong mang la: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout << a[j] << " ";
            }
        }
    }
    return 0;
}
