#include <iostream>
#include <iomanip>
using namespace std;

void BBsort(int a[], int n){
    int temp;
    for(int i = 0;i<n;i++){
    for(int j = i + 1;j<n;j++){
        if(a[i] < a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
}


int main(){
    int n,a[1000],b;
    cout << "Nhap so: ";
    cin >>n;
    cout << "Nhap so a: ";
    cin >> b;
    for(int i = 0;i < n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    BBsort(a,n);
    for(int j = 0;j < n;j++){
    cout<< a[j] << " ";
    }
    cout << "\nChi so phan tu a: " << a[b-1];
    return 0;
}


