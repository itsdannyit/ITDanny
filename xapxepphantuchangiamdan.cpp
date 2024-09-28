#include <bits/stdc++.h>
using namespace std;
int a[1000];
void BBsort(int a[], int n){
    int temp;
    for(int i = 0;i<n;i++){
    for(int j = i + 1;j<n;j++){
        if(a[i] % 2==0&& a[j] % 2==0){
        if(a[i] < a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
                }
            }
        }
    }
}


int main(){
    //fopen("xapxepphantu.out","w");
    int a[]={1,9,2,4,6,3,5,0,-5,8};
    int n=sizeof(a)/sizeof(a[0]);
    cout << "Nhap so nguyen trong day la: ";
    //cin >>n;
    //for(int i = 0;i < n;i++){
        //cout << "a[" << i << "] = ";
        //cin >> a[i];
    //}
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
