#include <iostream>

using namespace std;

void BBsort(int a[], int n){
    int temp;
    for(int i = 0;i<n;i++){
    for(int j = i + 1;j<n;j++){
        if(a[i] > a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
}

int main(){
    int a[1000], n;
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    BBsort(a,n);
    cout << "\nSo lon nhat: ";
    cout<< a[n-1] << " ";
    cout << "\nSo nho nhat: ";
    cout<< a[0] << " ";
    return 0;
}
