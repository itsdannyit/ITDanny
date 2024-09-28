#include <iostream>

using namespace std;

void bangnhau(int a[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                cout << "(" << a[i] << "," << a[j] << ")" << endl;
            }
        }
    }
}

int main(){
    int n,a[1000],z=0,k;
    cout << "Input k: ";
    cin >> k;
    cout << "Input n: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    bangnhau(a,n,k);
    return 0;
}
