#include <iostream>

using namespace std;

int doixung(int a[],int n){
    for(int i=0;i<n/2;i++){
        if(a[i] != a[n-i-1]){
              return 0;
        }
    }
    return 1;
}

int main(){
    int n,a[1000],z=0,k=0;
    cout << "Input n: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    if(doixung(a,n)==1){
        cout << "Mang doi xung";
    }
    else{
        cout << "Mang khong doi xung";
    }
    /*z = n;
    for(int i=0;i<n/2;i++){
        if(a[i] == a[z-1]){
            k++;
        }
        z--;
    }
    if(k==n/2){
        cout << "Mang doi xung";
        //cout << k;
    }
    else{
        cout << "Mang khong doi xung";
        //cout << k;
    }*/
    return 0;
}
