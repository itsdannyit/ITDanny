#include <bits/stdc++.h>
using namespace std;
int a[1000];

void BBsort(int a[], int n){
    int temp,l=n,dem=0;
    for(int i = 0;i<n;i++){
    for(int j = i + 1;j<n;j++){
        if((a[i] < a[j]) && (a[i]<0 && a[j]<0)||(a[i]>=0&&a[j]>=0)){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }

}


int main(){
    int a[]={1,-9,2,-4,-6,3,5,-2,-5,8};
    int n=sizeof(a)/sizeof(a[0]);
    //cout << "Nhap so nguyen trong day la: ";
    cout << "Mang truoc xap xep: ";
    for(int j = 0;j < n;j++){
    cout<< a[j] << " ";
    }

    BBsort(a,n);
    cout << "\nMang sau khi xap xep:";
    for(int j = 0;j < n;j++){
    cout<< a[j] << " ";
    }
    return 0;
}

