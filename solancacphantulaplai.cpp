#include <bits/stdc++.h>
using namespace std;

void tinh(int a[],int n){
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                    if(a[i]==a[j]){
                        dem++;
                        if(a[i]==a[j]){
                    cout << a[i] << " xuat hien " << dem << endl;
                    dem=0;
                        }
            }
        }
    }
}

int main(){
    int n,a[1000];
    cout << "Num: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    tinh(a,n);
    return 0;
}

